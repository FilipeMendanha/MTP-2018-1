//Filipe Mendanha
//11721EBI022
#include <stdio.h>
int decbin(int decimal)
{
	int i, x=0;
	for(i=31;i>=0;i--)
	{	x = decimal >> i;
		if(x & 1)
		{	 printf("1");}
		else {printf ("0");}
	}
}
int main()
{	
	char base[256];
	int	caso, vet[256], num,num2;
	do{	printf("\n\n\tCalculadora Bitwise \n\n Escolha que tipo de operacao deseja fazer:\n1. NOT"
		" \n2. AND \n3. OR \n4. XOR \n5. RIGHT SHIFT\n6. LEFT SHIFT\n7. Exit\nmenu: ");
		scanf("%d", &caso); getchar();
	
		switch(caso)
		{
			case 1:
				printf("\n Digite o numero para o qual deseja fazer a operacao bitwise NOT:\n");
				scanf("%d", &num);
				getchar();
				printf("\t\t\t\t   A | NOT\n\n");
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | %d(", (~num));
				decbin(~num);printf(")\n");				
				break;
			case 2:
				printf("\n Digite dois numeros para os quais deseja fazer a operacao bitwise AND:\n");
				scanf("%d %d", &num,&num2 );
				getchar();
				printf("\nA | B | AND\n");
				//printf("%X | %X | %X\n", a , b , a&b);
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | %d(", num2);
				decbin(num2);printf(")");
				printf("| %d(",num&num2);decbin(num&num2);printf(")\n") ;
				break;
			case 3:
				printf("\n Digite dois numeros para os quais deseja fazer a operacao bitwise OR:\n");
				scanf("%d %d", &num,&num2 );
				getchar();
				printf("\nA | B | OR\n");
				//printf("%X | %X | %X\n", a, b , a|b);
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | %d(", num2);
				decbin(num2);printf(")");
				printf("| %d(",num|num2);decbin(num|num2);printf(")\n") ;
				break;
			case 4:
				printf("\n Digite dois numeros para os quais deseja fazer a operacao bitwise XOR:\n");
				scanf("%d %d", &num,&num2 );
				getchar();
				printf("\nA | B | XOR\n");
				//printf("%X | %X | %X\n", a, b , a|b);
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | %d(", num2);
				decbin(num2);printf(")");
				printf("| %d(",num^num2);decbin(num^num2);printf(")\n") ;
				break;	
			case 5:
				printf("\n Digite o numero para o qual deseja fazer a operacao bitwise RIGHT SHIFT e o numero de bits que deseja deslocar, respectivamente:\n");
				scanf("%d %d", &num,&num2 );
				getchar();
				printf("\nA | >>Bits | Right shift \n");
				//printf("%X | %X | %X\n", a, b , a|b);
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | >> %d bits(", num2);
				decbin(num2);printf(")");
				printf("| %d(",num>>num2);decbin(num>>num2);printf(")\n") ;
				break;
			case 6:
				printf("\n Digite o numero para o qual deseja fazer a operacao bitwise LEFT SHIFT e o numero de bits que deseja deslocar, respectivamente:\n");
				scanf("%d %d", &num,&num2 );
				getchar();
				printf("\nA | >>Bits | Left shift \n");
				//printf("%X | %X | %X\n", a, b , a|b);
				printf("%d( ",num);
				decbin(num);printf(")");
				printf(" | << %d bits(", num2);
				decbin(num2);printf(")");
				printf("| %d(",num<<num2);decbin(num<<num2);printf(")\n") ;
				break;
			case 7:
				return 0;
				break;
			}
	}while(caso!=7);		
	return 0;
}