/***************************************
 * 	Homework2_Ex1_Even_Odd.c
 *  Author: Mostafa Medhat
 ***************************************/


#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;
	while(1)
	{
		printf("Enter a number: ");
		scanf("%d", &num);
		if(num % 2 == 0)
		{
			printf("%d is Even\n", num);
		}
		else
		{
			printf("%d is Odd\n", num);
		}
	}

}

