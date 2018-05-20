//Filipe Porto Mendanha
//11721EBI022

#include <stdio.h>

typedef unsigned long int natural;
natural ack(int x, int y){
	if (x == 0){
		return y+1;
	}else if (y == 0){
		return ack(x - 1, 1);
	}else{
		natural resp = ack(x, y - 1);
		return ack(x - 1, resp);
	}
}
 
int main(){
	unsigned long int valor;
	int i, j;
	puts("Digite o parametro m e n respectivamente");
	scanf("%d %d", &i, &j);
	valor = ack(i, j);
	printf("Ack (%d, %d) = %lu\n", i, j, valor);
	
	return 0;
}