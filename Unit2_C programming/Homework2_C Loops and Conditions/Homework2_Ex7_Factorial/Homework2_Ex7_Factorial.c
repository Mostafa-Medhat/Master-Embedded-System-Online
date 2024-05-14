/***************************************
 * 	Homework2_Ex7_Factorial.c
 *  Author: Mostafa Medhat
 ***************************************/

#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;
	long long rslt = 1;

	printf("Enter an integer: ");
	scanf("%d", &num);
	if(num > 0)
	{

		for(int i = num; i > 0; i-- )
		{
			rslt *= i;
		}
		printf("Factorial = %lld", rslt);
	}
	else
	{
		printf("Error! Factorial of negative numbers doesn't exist.");
	}
}
