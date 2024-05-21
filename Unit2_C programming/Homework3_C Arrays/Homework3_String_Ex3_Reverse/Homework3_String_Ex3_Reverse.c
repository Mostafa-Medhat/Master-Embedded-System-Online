/***************************************
 * 	Homework3_String_Ex3_Reverse.c
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
	char temp_var = 0;
	int arr_size;


	/* Get the string */
	printf("Enter a string: ");
	gets(arr);
	arr_size = strlen(arr);

	/* Reverse the array */
	for(int i=0; i<arr_size/2; i++)
	{
		temp_var = arr[i];
		arr[i] = arr[arr_size-i-1];
		arr[arr_size-i-1] = temp_var;
	}
	printf("Reverse string is: %s", arr);
}

