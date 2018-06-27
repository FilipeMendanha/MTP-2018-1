//Filipe Porto Mendanha
//11721EBI022

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int n ) {
	int i;
	for(i = 0; i < n ; i++)
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float soma(float *inicio_vetor, float *fim_vetor){
	return inicio_vetor == fim_vetor ? 0.0 : *inicio_vetor + soma(inicio_vetor+1, fim_vetor);
}

float produto(float *inicio_vetor, float *fim_vetor){
	return inicio_vetor == fim_vetor ? 1.0 : *inicio_vetor * produto(inicio_vetor+1, fim_vetor);
}

int main(){
	srand(123456);
	float *vetor;
	vetor=calloc(100, sizeof(float));
	gera_numeros(vetor, 100);
	int flag=0;
	while(flag>3 || flag<3){
		printf("\n1.Somatorio\n2.Produtorio\n3.EXIT\n-- ");
		scanf("%d",&flag);
		getchar();
		
		switch(flag){
			case 1:
				printf("\nSoma: %f\n", soma(vetor, vetor+100));
				break;
			case 2:
				printf("\nProduto: %f\n", produto(vetor, vetor+100));
				break;
			case 3:
				return 0;
				break;
		}
	}
	free(vetor);
	return 0;
}