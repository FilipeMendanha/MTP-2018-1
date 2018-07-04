//Filipe Porto Mendanha
//11721EBI022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dimensoes{
    float largura;
    float profundidade;
    float altura;
}Dimensoes;

typedef struct Produto{
    char nome[64];
    float preco;
    Dimensoes dimensoes;
}Produto;

void cadastra(Produto * p){
	
    printf("\nDigite o nome do produto: ");
    fgets(p->nome, 64, stdin);
    p->nome[strlen(p->nome)-1] = '\0';
    
    printf("\nDigite o preco: ");
    scanf("%f", &(p->preco));
    getchar();
    
    printf("\nDigite a largura: ");
    scanf("%f", &(p->dimensoes.largura));
    getchar();
    
    printf("\nDigite a profundidade: ");
    scanf("%f", &(p->dimensoes.profundidade));
    getchar();
    
    printf("\nDigite a altura: ");
    scanf("%f", &(p->dimensoes.altura));
}

void consulta(Produto * p){
    char c;
    
    if(strlen(p->nome) == 0){
        printf("\nProduto ainda nao cadastrado\n");
        while((c=getchar()) != '\n');
        return;
    }
    
    printf("\n%s, R$ %.2f, Height: %.2fm x Length: %.2fm x Width: %.2fm\n", p->nome, p->preco,(p->dimensoes.largura),(p->dimensoes.profundidade), (p->dimensoes.altura));
    while((c=getchar())!='\n');
}

int main(){
    int flag=0, flag2;
    Produto * produtos = calloc(2, sizeof(Produto));
    char str[2][16] = {"Cadastro", "Consulta"};
    
    do{
        printf("\n***********MENU**********\n");
        printf("\n1 - Cadastrar\n2 - Consulta\n3 - Sair\n-- ");
        scanf("%d", &flag);
        getchar();
        
        flag2 = 0; 
		       
        	if(flag==1){
        		printf("\nRealizar %s\n", str[flag-1]);
         		printf("\n1 - Produto 1\n2 - Produto 2\n3 - Voltar\n-- ");
   	     		scanf("%d", &flag2);
   	     		getchar();
   	     		
   	     		switch(flag2){
   	     			
                        case 1: 
                            printf("\nProduto %d\n", flag2);
                            cadastra(&produtos[flag2-1]);
                          	break;
                          	
                        case 2: 
                            printf("\nProduto %d\n", flag2);
                            cadastra(&produtos[flag2-1]);
                          	break;                    
                    		}
                    		
                    	}
                    	
			if(flag==2){
        		printf("\nRealizar %s\n", str[flag-1]);
         		printf("\n1 - Produto 1\n2 - Produto 2\n3 - Voltar\n-- ");
   	     		scanf("%d", &flag2);
   	     		getchar();
   	     		
   	     		switch(flag2){
   	     			
                        case 1: 
                            printf("\nProduto %d\n", flag2);
                            consulta(&produtos[flag2-1]);
                          	break;
                          	
                        case 2: 
                            printf("\nProduto %d\n", flag2);
                            consulta(&produtos[flag2-1]);
                          	break;
                    		}
                    		
						}  
	}while(flag!=3);
	
	free(produtos);
	
    return 0;
}
