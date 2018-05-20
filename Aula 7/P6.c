//Filipe Porto Mendanha
//11721EBI022

#include <stdio.h>

float media(int soma, float qtd){
	float div;
	div = soma/qtd;
	return div;
}

int somavetor(int v[20], int n) {
   	int i, soma=0;
   	for (i=0;i<n;i++)
    {
    	soma+=v[i];
	}
      return (soma);}
      
int main(){
	
	int i, num[20], soma, qtd;
	
	do{
		puts("Quantos numeros deseja preencher no vetor de 5 a 20 slots?\n");
		scanf("%d",&qtd);
		}while(qtd<5||qtd>20);
		
	for(i=0; i<20; i++){num[i] = 0;}
	
	for(i=0; i<qtd; i++)
	{
		printf("\n %d numero: ", i+1);
		scanf("%d", &num[i]);
		getchar();
	}
	soma = (somavetor(num, i));
	
	printf("\nMedia - %f", media(soma, qtd));
	
	return 0;
	}