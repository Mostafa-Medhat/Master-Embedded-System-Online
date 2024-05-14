/***************************************
 * 	Homework2_Ex5_Alphabet.c
 *  Author: Mostafa Medhat
 ***************************************/

#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char ch;
	while(1)
	{
		printf("Enter an alphabet: ");
		scanf(" %c", &ch);
		if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
		{
			printf("%c is an alphabet\n", ch);
		}
		else
		{
			printf("%c is not an alphabet\n", ch);
		}
	}
}
