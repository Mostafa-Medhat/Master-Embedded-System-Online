/***************************************
 * 	Homework2_Ex4_Positive_Negative.c
 *  Author: Mostafa Medhat
 ***************************************/



#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num>0)
	{
		printf("%d is a positive number", num);
	}
	else if (num<0)
	{
		printf("%d is a negative number", num);
	}
	else
	{
		printf("%d is zero", num);
	}
}
