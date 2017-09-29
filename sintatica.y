%{
#include <iostream>
#include <string>
#include <sstream>
#include <map>

#include "controleDeVariaveis.h"

#define YYSTYPE atributos
#define constante_tipo_inteiro "int"
#define constante_tipo_real "float"
#define constante_tipo_booleano "bool"
#define constante_tipo_caracter "char"

#define MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN "Os operandos de expressões lógicas precisam ser do tipo booelan"

using namespace std;
using namespace ControleDeVariaveis;

struct atributos
{
	string label;
	string traducaoDeclaracaoDeVariaveis;
	string traducao;
	string tipo;
};

int yylex(void);
void yyerror(string);
string verificarTipoResultanteDeCoercao(string, string, string);
void disparaErro(string);

%}

%token TK_NUM
%token TK_BOOL
%token TK_CHAR
%token TK_OP_LOGICO_BIN
%token TK_OP_LOGICO_UNA
%token TK_OP_RELACIONAL
%token TK_MAIN TK_ID TK_TIPO_INT TK_PALAVRA_VAR
%token TK_FIM TK_ERROR

%start S


%left "not"
%left "and" "or"
%nonassoc "==" "!="
%nonassoc '<' '>' "<=" ">="
%left '+' '-'
%left '/' '*'

%%

S 			: TK_TIPO_INT TK_MAIN '(' ')' BLOCO
			{
				cout << "/*Compilador FOCA*/\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\nint main(void)\n{\n" << $5.traducao << "\treturn 0;\n}" << endl; 
			}
			;

BLOCO		: '{' COMANDOS '}'
			{
				$$.traducao = $2.traducaoDeclaracaoDeVariaveis;
				$$.traducao =  $$.traducao + "\n" + $2.traducao;
			}
			;

COMANDOS	: COMANDO COMANDOS
			{
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + $2.traducaoDeclaracaoDeVariaveis;
				$$.traducao = $$.traducao + "\n" + $2.traducao;
			}
			|
			;

COMANDO 	: E ';'
			|
			E_UNARIA ';'
			|
			E_REL ';'
			|
			E_LOGICA ';'
			|
			TERMO_CARACTER ';'
			|
			TK_PALAVRA_VAR TK_ID ';'
			{
				$$.label = $2.label;
				if(variavelJaDeclarada($2.label)){
					disparaErro("A variavel com id '" + $2.label + "' já existe");
				}else{
					incluirNoMapa($2.label);
				}
			}
			|
			TK_PALAVRA_VAR TK_ID '=' VALOR_ATRIBUICAO ';'
			{
				if(variavelJaDeclarada($2.label)){
					disparaErro("dupla declaração da variavel com id '" + $2.label + "'");
				}else{
					string tipo = $4.tipo;
					if(tipo == constante_tipo_booleano)
						tipo = constante_tipo_inteiro;
					
					$$.traducaoDeclaracaoDeVariaveis = $4.traducaoDeclaracaoDeVariaveis + "\t" + tipo + " " + $2.label + ";\n";
					$$.traducao = $4.traducao + "\t" + $2.label + " = " + $4.label + ";\n";
					incluirNoMapa($2.label, $4.tipo);
				}
			}
			|
			TK_ID '=' VALOR_ATRIBUICAO ';'
			{
				if(variavelJaDeclarada($1.label)){
					DADOS_VARIAVEL metaData = recuperarDadosVariavel($1.label);
					if(metaData.tipo == ""){
//isso aqui também pode causar problema no futuro devido as lacunas
						metaData.tipo = $3.tipo;
						atualizarNoMapa(metaData);
						string tipo = metaData.tipo;
						if(tipo == constante_tipo_booleano)
							tipo = constante_tipo_inteiro;
						$$.traducaoDeclaracaoDeVariaveis = "\t" + tipo + " " + metaData.nome + ";\n";
					}
					
					$1.tipo = metaData.tipo;
//provavelmente ainda há lacunas, mas vamos ignorar por enquanto
					if(metaData.tipo == $3.tipo){
						$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
						$$.traducao = $3.traducao + "\t" + $1.label + " = " + $3.label + ";\n";
					}
					else{
						disparaErro("Os tipos da atribuição não são compativeis. A de variavel de id '" + $1.label + "' é do tipo '" + $1.tipo + "' e o valor atribuido é do tipo '"+ $3.tipo + "'\n");
					}
				}
			}
			;


TERMO		: TK_NUM
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = "\t"  + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";
				$$.tipo = $1.tipo;
			}
			| TK_ID
			{
				if(variavelJaDeclarada($1.label)){
					$$.label = $1.label;
					$$.tipo = recuperarDadosVariavel($1.label).tipo;
				}else{
					disparaErro("Variável de id '" + $1.label + "' não declarada");
				}
			}
			;
			
VALOR_ATRIBUICAO: E
			|
			E_UNARIA
			|
			E_LOGICA
			|
			TERMO_CARACTER
			;

E 			: E '+' E
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = $1.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = $1.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + " + " + $3.label + ";\n";
			}
			|
			E '-' E
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = $1.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = $1.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + " - " + $3.label + ";\n";
			}
			|
			E1
			;

E1 			: E1 '*' E1
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = $1.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = $1.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + " * " + $3.label + ";\n";
			}
			|
			E1 '/' E1
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = $1.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = $1.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + " / " + $3.label + ";\n";
			}
			|
			'(' E ')'
			{
				$$ = $2;
			}
			|
			'(' E1 ')'
			{
				$$ = $2;
			}
			|
//ainda em duvida sobre este caso
//talvez seja somente usar o proprio E1 
			'(' '-' TERMO ')'
			{
				$$.label = $3.label;
				$$.traducaoDeclaracaoDeVariaveis = $3.traducaoDeclaracaoDeVariaveis;
				$$.traducao = $$.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $$.label + " * (-1);\n";
				$$.tipo = $3.tipo; 
			}
			|
			TERMO
			;
E_UNARIA	: '-' TERMO
			{
				$$.label = $2.label;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + $2.traducaoDeclaracaoDeVariaveis;
				$$.traducao = $$.traducao + $2.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $$.label + " * (-1);\n";
				$$.tipo = $2.tipo; 
			}
			|
			'+' '+' TERMO
			{
				$$.label = $3.label;
				$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
				$$.traducao = $$.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $$.label + " + 1;\n";
				$$.tipo = $3.tipo;
			}
			|
			'-' '-' TERMO
			{
				$$.label = $3.label;
				$$.traducaoDeclaracaoDeVariaveis = $3.traducaoDeclaracaoDeVariaveis;
				$$.traducao = $$.traducao + $3.traducao;
				$$.traducao = $$.traducao + "\t" + $$.label + " = " + $$.label + " - 1;\n";
				$$.tipo = $3.tipo;
			}
			;
E_LOGICA	: E_LOGICA TK_OP_LOGICO_BIN E_LOGICA
			{
				if($1.tipo == constante_tipo_booleano && $3.tipo == constante_tipo_booleano){
					$$.label = gerarNovaVariavel();
					$$.traducaoDeclaracaoDeVariaveis = $1.traducaoDeclaracaoDeVariaveis + $3.traducaoDeclaracaoDeVariaveis;
					string tipo = constante_tipo_inteiro;
					$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + tipo + " " + $$.label + ";\n";
					$$.traducao = $1.traducao + $3.traducao;
					$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + " " + $2.label + " " + $3.label + ";\n";
					$$.tipo = constante_tipo_booleano;
				}
				else{
					disparaErro(MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN);
				}
			}
			|
			//derivacao ambigua [usar %nonassoc]
			TK_OP_LOGICO_UNA E_LOGICA
			{
				if($2.tipo == constante_tipo_booleano){
					$$.label = gerarNovaVariavel();
					$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + $2.traducaoDeclaracaoDeVariaveis;
					string tipo = constante_tipo_inteiro;
					$$.traducaoDeclaracaoDeVariaveis = $$.traducaoDeclaracaoDeVariaveis + "\t" + tipo + " " + $$.label + ";\n";
					$$.traducao = $2.traducao;
					$$.traducao = $$.traducao + "\t" + $$.label + " = " + $1.label + $2.label + ";\n";
					$$.tipo = constante_tipo_booleano;
				}
				else{
					disparaErro(MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN);
				}
			}
			|
			TK_BOOL
			{
				if(!variavelJaDeclarada($1.label)){
				//no final das contas o 3º campo não foi necessário, mas pode ser util no futuro;
				// o motivo de não ter sido necessario é que as palavras true e false nunca serão reconhecidas como id;
					incluirNoMapa($1.label, $1.tipo, true);
					string valorBoolInt = "0";
					if($1.label == "true")
						valorBoolInt = "1";
					string tipo = constante_tipo_inteiro;
					$$.traducaoDeclaracaoDeVariaveis = "\t" + tipo + " " + $$.label + " = " + valorBoolInt + ";\n";
				}
				
				$$.label = $1.label;
				$$.tipo = $1.tipo;
			}
			|
			'(' E_LOGICA ')'
			{
				$$ = $2;
			}
			|
			E_REL
			;

TERMO_REL	: E
			;

E_REL		: TERMO_REL TK_OP_RELACIONAL TERMO_REL
			{
				//o tipo resultante deve ser constante_tipo_booleano
			}
			;
			
TERMO_CARACTER: TK_CHAR
			{
				$$.label = gerarNovaVariavel();
				$$.traducaoDeclaracaoDeVariaveis = "\t" + $1.tipo + " " + $$.label + ";\n";
				$$.traducao = "\t" + $$.label + " = " + $1.label + ";\n";
				$$.tipo = $1.tipo;
			}
			


%%

#include "lex.yy.c"

int yyparse();

int main( int argc, char* argv[] )
{
	yyparse();

	return 0;
}

void disparaErro(string mensagem){
	cout << mensagem << endl;
	exit(0);
}

string verificarResultanteDeCoercao(string tipo1, string tipo2, string operacao){
	//a principio será feito com if devido a pouca quantidade de tipo e falta de noção de como fazer o certo
	// mas depois vai ser preciso trocar para matriz
	
	if(tipo1 == constante_tipo_real || tipo2 == constante_tipo_real){
		return constante_tipo_real;
	}else{
		return constante_tipo_inteiro;
	}
}

void yyerror( string MSG )
{
	cout << MSG << endl;
	exit (0);
}				
