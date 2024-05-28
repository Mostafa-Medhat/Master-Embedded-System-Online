/***************************************
 * 	Homework4_Ex2_Factorial_Recursion.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

int Calc_Factorial(int number);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;
	long rslt;

	/* Entering a positive number to calculate factorial */
	do
	{
		puts("Enter a positive number: ");
		scanf("%d", &num);
	}
	while(num < 0);

	/* Calculate Factorial */
	rslt = Calc_Factorial(num);
	printf("Factorial of %d = %ld", num, rslt);
}

int Calc_Factorial(int number)
{
	if(number  == 1)
	{
		return 1;
	}
	return (number * Calc_Factorial(number-1));
}

