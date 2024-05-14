/***************************************
 * 	Homework2_Ex2_Vowel_Consonant.c
 *  Author: Mostafa Medhat
 ***************************************/

#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char ch;
	printf("Enter an alphabet: ");
	scanf("%c", &ch);
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
	{
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
				printf("%c is a Vowel", ch);
				break;
			default:
				printf("%c is a Consonant", ch);
		}
	}
	else
	{
		printf("Enter an alphabet letter");
	}
}
