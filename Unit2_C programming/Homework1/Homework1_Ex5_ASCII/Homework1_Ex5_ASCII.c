/***************************************
 * 	Homework1_Ex5_ASCII.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("ASCII Value of %c: %d", ch, ch);

}
