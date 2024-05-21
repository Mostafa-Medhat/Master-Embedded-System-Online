/***************************************
 * 	Homework3_String_Ex1_Frequency.c
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
	int frequency=0;
	char search_element, search_flag = 0;

	/* get the string */
	printf("Enter a string: ");
	gets(arr);

	/* Entering a character to search for */
	printf("Enter a character to find frequency: ");
	scanf(" %c", &search_element);

	/* Searching for the character and count frequency */
	for(int i = 0; i<strlen(arr); i++)
	{
		if(arr[i]==search_element)
		{
			frequency++;
			search_flag = 1;
		}
	}

	/* Printing frequency of the character*/
	if(search_flag)
	{
		printf("Frequency of %c = %d", search_element, frequency);
	}
	else
	{
		printf("character not found!");
	}

}

