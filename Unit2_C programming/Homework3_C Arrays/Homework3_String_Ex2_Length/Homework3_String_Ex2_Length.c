/***************************************
 * 	Homework3_String_Ex2_Length.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

#define ARR_SIZE 100
int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char arr[ARR_SIZE] = {0};
	int length=0;

	/* Get the string */
	printf("Enter a string: ");
	gets(arr);

	/* Calculating length of string */
	int i = 0;
	while(arr[i] != 0)
	{
		length++;
		i++;
	}

	/* printing length */
	printf("Length of string: %d", length);

}

