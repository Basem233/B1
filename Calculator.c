#include <stdio.h>

int main()
{
	float x,y;
	char r,z;
	do 
	{
		printf("Enter operand1: ");
		scanf("%f",&x);
		printf("Enter operand2: ");
		scanf("%f",&y);
		printf("Enter operation: ");
		scanf(" %c",&z);
		switch(z)
		{
			case '+':
			printf("The result is = %f\n",x+y);
			break;
			case'-':
			printf("The result is = %f\n",x-y);
			break;
			case'*':
			printf("The result is = %f\n",x*y);
			break;
			case'/':
			printf("The result is = %f\n",x/y);
			break;
			default:
			printf("Wrong operation\n");
			break;
		}
		printf("Would you like to repeat y/n: ");
		scanf(" %c",&r);
		
	}
	while (r=='y');
}