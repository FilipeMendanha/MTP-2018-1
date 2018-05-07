//Filipe Mendanha
//11721EBI022
#include <stdio.h>
int main()
{	
	char base[256];
	int	num=0,i;
	printf("Entre com valores numericos de sua escolha-> 'Digite uma string numerica':\n ");
	fgets(base,256,stdin);
	getchar();
	for(i=0;base[i]!='\0';i++)
	{
		if(base[i]>=48&&base[i]<=57)
		{
			base[i]=base[i]-48;
			num=num*10+base[i];
		}
	}
	puts("Os numeros presentes na string na ordem digitada, esta apresentado a seguir como um numero inteiro:\n");
	printf("%d", num);
	return 0;
}