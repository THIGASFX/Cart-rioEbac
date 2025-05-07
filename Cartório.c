#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //Fun��o responsavel por cadastrae os usu�rios no sistema
{
	//Inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��es do usu�rio

	strcpy(arquivo, cpf);//Respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salvo o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //a letra "a" significa a abertura e a atualiza��o do arquivo
	fprintf(file,","); //a "," significa a separa��o de um arquivo dentro do arquivo/Espa�o
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

int consulta() //Consultando vari�veis
{
	setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200]; //armazenando a vari�vel
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf); //salvando na string cpf
	
	FILE *file;
	file = fopen(cpf,"r"); //abrindo e lendo o arquivo cpf
	if(file == NULL)
	{
	  printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n"); //Caso o arquivo n�o seja encontrado
	}
	
	while(fgets(conteudo, 200, file) !=NULL) //buscando o conteudo existente ou nulo
	{
		printf("\n Essas s�o as informa��es do usu�rio: ");
		printf("%s",conteudo);
		printf("\n\n");
		
		system("pause");
		
	}
	
}

int deletar() //Deletar vari�veis
{
	char cpf[40]; 
		
	printf("Digite  o CPF do usu�rio a ser deletado: "); 
	scanf("%s",cpf);
	
	remove(cpf); //renove o cpf
	
	FILE *file;
	file = fopen(cpf,"r"); //o "r" significa ler o arquivo
	
	if(file == NULL) //Caso o usu�rio n�o exista no sistema
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause"); 
		
		
	}
	
}

int main()
{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
		
	 setlocale(LC_ALL,"Portuguese"); //Definindo a linguagem

	 printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
	 printf("Escolha a op��o desejada no menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("Op��o: ");//fim do menu
	
	 scanf("%d" , &opcao); //armazenando a escolha do usu�rio
	
	 system("cls"); //Responsavel por limpar a tela
	 
	 
	 switch(opcao)
	 {
	 	case 1:
	 	 registro(); //Chamada de fun��es
		 break;
		 
		 case 2:
		 consulta(); //Consulta de fun��es
		 break;
		 
		 case 3:
		 deletar(); //Deletar fun��es
		 break;
		 
		 default: //caso n�o tenha nenhuma op��o existente no sistema
		 printf("Essa op��o n�o est� disponivel!\n");
		 system("pause");
		 break; //mostra quando acaba
	 } //Fim da sele��o
	 
	
	}
}
