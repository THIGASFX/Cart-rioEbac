#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //Função responsavel por cadastrae os usuários no sistema
{
	//Inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuário

	strcpy(arquivo, cpf);//Responsável por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salvo o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //a letra "a" significa a abertura e a atualização do arquivo
	fprintf(file,","); //a "," significa a separação de um arquivo dentro do arquivo/Espaço
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //inicio do casdastro
	
	file = fopen(arquivo, "a"); //atualizando cadastro
	fprintf(file,nome); //Salvando na string nome
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	
	file = fopen(arquivo, "a"); //atualizando sobrenome
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a"); //atualizando cargo
	fprintf(file,cargo);
	fclose(file);
	
	system("pause"); // fim do cadastro
	
	
}

int consulta() //Consultando variáveis
{
	setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200]; //armazenando a variável
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf); //salvando na string cpf
	
	FILE *file;
	file = fopen(cpf,"r"); //abrindo e lendo o arquivo cpf
	if(file == NULL)
	{
	  printf("Não foi possivel abrir o arquivo, não localizado!.\n"); //Caso o arquivo não seja encontrado
	}
	
	while(fgets(conteudo, 200, file) !=NULL) //buscando o conteudo existente ou nulo
	{
		printf("\n Essas são as informações do usuário: ");
		printf("%s",conteudo);
		printf("\n\n");
		
		system("pause");
		
	}
	
}

int deletar() //Deletar variáveis
{
	char cpf[40]; 
		
	printf("Digite  o CPF do usuário a ser deletado: "); 
	scanf("%s",cpf);
	
	remove(cpf); //renove o cpf
	
	FILE *file;
	file = fopen(cpf,"r"); //o "r" significa ler o arquivo
	
	if(file == NULL) //Caso o usuário não exista no sistema
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("pause"); 
		
		
	}
	
}

int main()
{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
		
	 setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem

	 printf("### Cartório da EBAC ###\n\n"); //Inicio do menu
	 printf("Escolha a opção desejada no menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Opção: ");//fim do menu
	
	 scanf("%d" , &opcao); //armazenando a escolha do usuário
	
	 system("cls"); //Responsavel por limpar a tela
	 
	 
	 switch(opcao)
	 {
	 	case 1:
	 	 registro(); //Chamada de funções
		 break;
		 
		 case 2:
		 consulta(); //Consulta de funções
		 break;
		 
		 case 3:
		 deletar(); //Deletar funções
		 break;
		 
		 default: //caso não tenha nenhuma opção existente no sistema
		 printf("Essa opção não está disponivel!\n");
		 system("pause");
		 break; //mostra quando acaba
	 } //Fim da seleção
	 
	
	}
}
