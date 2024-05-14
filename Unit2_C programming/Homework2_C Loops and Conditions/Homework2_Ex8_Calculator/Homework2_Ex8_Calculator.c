/***************************************
 * 	Homework2_Ex8_Calculator.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x=0,y=0;
	char op = 0;
	printf("Enter two integers: ");
	scanf("%f\t%f",&x,&y);
	printf("Enter the operation: ");
	scanf(" %c", &op);
	switch(op)
	{
		case '+':
			printf("Result is %f", (x+y));
			break;
		case '-':
			printf("Result is %f", (x-y));
			break;
		case '*':
			printf("Result is %f", (x*y));
			break;
		case '/':
			printf("Result is %f", (x/y));
			break;
		default:
			printf("Enter appropriate operation");
	}
}
