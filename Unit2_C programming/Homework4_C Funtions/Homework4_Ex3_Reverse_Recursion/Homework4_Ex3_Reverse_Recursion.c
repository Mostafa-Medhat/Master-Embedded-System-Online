/***************************************
 * 	Homework4_Ex3_Reverse_Recursion.c
 *  Author: Mostafa Medhat
 ***************************************/
#include<stdio.h>
#include<string.h>

void Reverse_Sentence();

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	/* Entering a sentence */
	puts("Enter a sentence: ");

	/* Reverse the sentence */
	Reverse_Sentence();


}

void Reverse_Sentence()
{
	char ch ;
	scanf("%c", &ch);
	if(ch != '\n')
	{
		Reverse_Sentence();
	}
	printf("%c", ch);
}
