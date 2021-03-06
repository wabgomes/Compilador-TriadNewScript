#include<iostream>
#include <string>
#include <sstream>


using namespace std;

namespace MensagensDeErro{

	#define MSG_ERRO_DUPLA_DECLARACAO_DE_VARIAVEL "Erro: A variável com id \"\t\" já existe no escopo atual."
	#define MSG_ERRO_VARIAVEL_NAO_DECLARADA "Erro: Variável de id \"\t\" não declarada."
	#define MSG_ERRO_VARIAVEL_NAO_DECLARADA_NO_ESCOPO "Erro: Variável de id \"\t\" não declarada no escopo especificado."
	#define MSG_ERRO_PARAMETRO_BACKSCOPE_DEVE_SER_INTEIRO "Erro: O índice de retorno de escopo deve ser do tipo \"inteiro\" e o tipo informado foi \"\t\"."
	#define MSG_ERRO_PARAMETRO_BACKSCOPE_MAIOR_OU_IGUAL_ESCOPO_ATUAL "Erro: O índice de retorno de escopo deve ser menor que o escopo atual. Se for igual use o comando \"(global) <var-id>\" para acessar o escopo global."
	#define MSG_ERRO_VARIAVEL_UTILIZADA_PRECISA_TER_RECEBIDO_UM_VALOR "Erro: A variável de id \"\t\" precisa ter recebido um valor antes de ser utilizada."
	#define MSG_ERRO_ATRIBUICAO_DE_TIPOS_DIFERENTES "Erro: Os tipos da atribuição são diferentes. A de variavel de id \"\t\" é do tipo \"\t\" e o valor atribuido é do tipo \"\t\"."
	#define MSG_ERRO_VALOR_NAO_PODE_SER_CONVERTIDO "Erro: Não é possível fazer a conversão do tipo \"\t\" para o tipo \"\t\"."

	#define MSG_ERRO_OPERACAO_PROIBIDA_ENTRE_TIPOS "Erro: Não é possível efetuar operação com o operador \"\t\" entre os tipos \"\t\" e \"\t\"."

	#define MSG_ERRO_CONVERSAO_EXPLICITA_INDEVIDA "Erro: Não é possível efetuar conversão explicita do tipo \"\t\" para o tipo \"\t\". Operação indevida"
	#define MSG_WARINING_VARIAVEL_DECLARADA_NAO_UTILIZADA "Warning: A variável \"\t\" foi declarada, mas não foi utilizada."

	#define MSG_ERRO_COMENTARIO "Erro: '\t' não encontrado para fechar comentário."

	#define MSG_ERRO_TIPO_ID_SWITCH_CASE_INVALIDO "Erro: Variável tipo 'string', 'char' ou 'float' não permitida no comando switch-case."
	#define MSG_ERRO_TIPO_CASE_DISTINTO "Erro: Tipo diferente do id de comparação no comando switch-case."
	#define MSG_ERRO_BREAK_NAO_PERMITIDO "Erro: Comando 'break' não permitido uso neste escopo."
	#define MSG_ERRO_CONTINUE_NAO_PERMITIDO "Erro: Comando 'continue' não permitido uso neste escopo."
	#define MSG_ERRO_VARIAVEL_SEM_ATRIBUICAO_FOR "Erro: Variável \"\t\" não foi inicializada no comando for."
	#define MSG_ERRO_UPDATE_FOR_SEM_ATRIBUICAO "Erro: Termos de atualização do for não correspondentes."
	#define MSG_ERRO_FOR_SEM_CONDICAO "Erro: Condição no comando for inexistente."


	//****** erros da parte de tratamento de erros ***********

	#define MSG_ERRO_VALOR_A_ESQUERDA_DE_OPERADOR_COPOSTO_PRECISA_SER_VARIAVEL "Erro: o operador composto \"valor_esquerda \t valor_direita\" requer que valor_esquerda seja uma variável."

	#define MSG_ERRO_OPERADOR_UNARIO_INVALIDO_PARA_OPERANDO "Erro: o operador \"\t\" não pode ser utilizado no operando especificado, porque \t."

	#define MSG_ERRO_TIPO_NAO_INPUTAVEL "Erro: o comando \"read\" não permite leitura de variáveis do tipo \"\t\"."

	#define MSG_ERRO_VALOR_ATRIBUIDO_NAO_PODE_SER_ATRIBUIDO "Erro: o valor atribuído a \"\t\" não é um tipo atribuível."

	#define MSG_ERRO_PARAMETRO_ATRIBUIDO_POSSUI_TIPO_DIFERENTE "Erro: em chamada da função \"\t\", o parametro atribuído na posição \t (para o parametro de nome \"\t\"), possuí tipo \"\t\" quando era esperado o tipo \"\t\"."

	#define MSG_ERRO_QUANTIDADE_DE_PARAMETROS_INCOPATiVEL "Erro: em chamada da função \"\t\", a quantidade de parametros atribuída (\t parametros), difere da quantidade de parametros esperada (\t parameros)."


	#define MSG_ERRO_NOME_DE_FUNCAO_NAO_IDENTIFICADO "Erro: a função \"\t\" não foi encontrada."
	#define MSG_ERRO_ID_NAO_REFERENTE_A_UMA_FUNCAO "Erro: o id \"\t\" não é do tipo função"

	#define MSG_ERRO_FUNCAO_COM_MAIS_DE_UM_RETORNO_NAO_PODE_SER_OPERADA_OU_ATRIBUIDA "Erro: a função de id \"\t\" precisa possuir um e somente um tipo de retorno para poder ser operada ou atribuída."
	#define MSG_ERRO_DECLARACAO_DE_FUNCAO_NAO_EH_OPERAVEL_OU_ATRIBUIVEL "Erro: declaração de função não pode ser operado ou atribuído a uma variável."
	
	#define MSG_ERRO_COMANDO_RETURN_USADO_INDEVIDAMENTE "Erro: o comando \"return\" não pode ser utilizado fora do corpo de uma função."
	#define MSG_ERRO_VALORES_DE_RETORNO_INCOMPATIVEIS "Erro: o comando \"return\" na função \"\t\" possui quantidade de valores incompativel com os especificados na declaração da função. Foi passado \t quando se esperava \t."
	#define MSG_ERRO_FUNCAO_DEFINIDA_COM_BLOCO_SEM_RETORNAR "Erro: a função \"\t\" possuí tipos de retorno definidos nem todos os seus caminhos fazem \"return\"."
	#define MSG_ERRO_TAMANHO_INFORMADO_DEVE_SER_INTEIRO "Erro: o tamanho informado para o tipo \"\t\" deve ser um número inteiro."
	#define MSG_ERRO_PARAMETRO_A_MAIS_PASSADOS_NO_RETORNO "Erro: parametros a mais foram informados no retorno da função \"\t\", nesta são necessários apenas \t parametros"
	#define MSG_ERRO_TIPO_DIFERENTE_ENTRE_VALOR_E_RETORNO "Erro: o valor de retorno da função \"\t\" na posição \t foi fornecido como \"\t\", quando se esperava \"\t\""
	#define MSG_ERRO_TAMANHO_DIFERENTE_ENTRE_VALOR_E_RETORNO "Erro: o valor de retorno do tipo \"\t\" da função \"\t\" na posição \t foi fornecido com tamanho \t quando era esperado o tamanho \t"

	#define MSG_ERRO_VALOR_NEGATIVO_ARRAY "Erro: Dimensão/Índice negativo ou zero no acesso ao Array."
	#define MSG_FIM_EXECUCAO_ARRAY "Acesso ou alocação de memória indevida (Memory fault)."
	#define MSG_ERRO_VARIAVEL_PRECISA_CONTER_UM_ARRAY "Erro: a váriavel de id \"\t\" precisa conter um array para poder ser operada pelos operadores de array"
	string montarMensagemDeErro(string, string*, int);
	void yywarnning(string);

	string SEP_PARAMS = "\t";

	string montarMensagemDeErro(string mensagem, string* parametros = NULL, int qtdParametros = 0){
		int pos;
		for(int i = 0; i < qtdParametros; i++){
			pos = mensagem.find(SEP_PARAMS);
			string param = parametros[i];
			if(param.find(prefixo_variavel_usuario) == 0){
				string prefix = prefixo_variavel_usuario;
				param.replace(0, prefix.length(), "");
			}
			if(pos > 0)
				mensagem.replace(pos, SEP_PARAMS.length(), param);
			else
				return constante_erro;
		}

		return mensagem;

	}

	void yywarning(string MSG)
	{
		cout << MSG << endl;
	}

}
