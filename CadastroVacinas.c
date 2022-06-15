#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define size 50

struct Cadastro{
	int cod;
	char nome[size]; 
	char cpf[size];
	char vacina[size];
	char data[size];
	char nlote[size];
};

	int op;	
	struct Cadastro cad[size];	
	void cadastro();
	void listar();
	void pesquisarcpf();

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		system("color 0B");
		
	    printf("\n ---- Menu Controle De Vacinas ----\n\n\t 1 - Cadastrar\n\t 2 - Listar todos\n\t 3 - Pesquisar\n\t 4 - Sair\n\t\n");
	    printf("-----------------------------------\n");
	    printf(" Escolha uma opção...  ");
	    scanf("%d", &op);
	    fflush(stdin);
	    
	    switch(op){
	    	case 1:
	    		cadastro();
	    		break;
	    	case 2:
	    		printf("-----------------------------------\n");
	    		listar();	
	    		break;
	    	case 3:
	    		pesquisarcpf();
	    		break;
	    	case 4:
	    		system("exit");
	    	    break;
	    	default:
	    		printf("-----------------------------------\n");
	    		system("color c");
	    		printf("\n\t Opcão Invalida\n\n");
	    		printf("-----------------------------------\n");
	    		system("pause");
	    		break;
		}
	    
	}while(op!=4); //se opção for diferente de 4 ( c n quiser sair) igual a 4 sai do prog
}

void cadastro(){

	system("cls");
	system("color 0e");
	
	static int linha;
		printf("\n\t\t Cadastrar  ");
		printf("\n==============================================\n");
		
		cad[linha].cod = linha + 1;
		printf("\n Codigo: %d\n", cad[linha].cod);
		
		printf("\n Nome: ");
		gets(cad[linha].nome);
		fflush(stdin);
		
		printf("\n Cpf: ");
		gets(cad[linha].cpf);
		fflush(stdin);
		
		printf ("\n Vacina: ");
		gets(cad[linha].vacina);
		fflush(stdin);
		
		printf ("\n Data: ");
		gets(cad[linha].data);
		fflush(stdin);
		
		printf ("\n Num lote: ");
		gets(cad[linha].nlote);
		fflush(stdin);
		
		linha++; //muda para proxima linha ou (linha=linha+1)
		
		printf("\n==============================================");
		system("color a");
		printf("\n\n\t  Cadastrado com sucesso \n\n");
		printf("==============================================\n\n");
		
		system("pause");

} //fim do cadastro

void listar(){
	int i;
	do{
	for(i=0;i<200;i++){
		if(cad[i].cod>0){
			system("color a");
			printf("\n Codigo: %d\n Nome: %s\n CPF: %s\n Vacina: %s\n Data: %s\n Numero do lote: %s\n\n", cad[i].cod, cad[i].nome, cad[i].cpf, cad[i].vacina, cad[i].data, cad[i].nlote);
			printf("-----------------------------------\n");
		}
		else{
			break;
		}
	}	
	system("pause");
	}while(cad[i].cod=0);	
} //fim do listar

void pesquisarcpf(){ 

	system("cls"); 
	system("color 0e");
	
	char cpfPesquisa[size];  
    int j;
    
    printf("\n\t     Pesquisar Pelo CPF  ");
	printf("\n==============================================\n");
    
    printf("\nDigite o CPF: ");
    gets(cpfPesquisa);
    fflush(stdin); 
    
    for(j=0;j<200;j++){
         if(strcmp(cad[j].cpf,cpfPesquisa) == 0){
         	system("color a");
            printf("\n Codigo: %d\n Nome: %s\n CPF: %s\n Vacina: %s\n Data: %s\n Numero do lote: %s\n\n", cad[j].cod, cad[j].nome, cad[j].cpf, cad[j].vacina, cad[j].data, cad[j].nlote);
            system("pause");
        }
    }
	return 0;
} //fim do pesquisarcpf
