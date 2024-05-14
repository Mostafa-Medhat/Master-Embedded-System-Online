/***************************************
 * 	Homework2_Ex6_Natural.c
 *  Author: Mostafa Medhat
 ***************************************/

#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0, sum = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);
	for(int i = 1; i <= num; i++ )
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}
