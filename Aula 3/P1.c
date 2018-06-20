//Filipe Porto Mendanha 
//11721EBI022
#include <stdio.h>

int main() {

	int estado,j;
	char bits[256];

	printf("entre com o numero em binario; sequencias de 0 e 1\n");
	fgets(bits,256,stdin);
  	estado=0; 
	for (j=0;bits[j+1]!='\0';j++)
	{
		if(estado==0)
		{
			if (bits[j]=='1'){estado=1;}
			else{estado=0;}
		}
		else if(estado==1)
		{
			if(bits[j]=='0'){estado=2;}
			else{estado=0;}
		}
		else
		{
			if(bits[j]=='0'){estado=1;}
			else{estado=2;}
		}
	}
	//	printf("\t%d", estado);
			if(estado==0)
			{printf("\nsequencia binaria multipla de 3");} 
		else {printf("\nnao eh multiplo de 3");}
	return 0;
} 
