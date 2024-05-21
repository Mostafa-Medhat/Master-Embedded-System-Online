/***************************************
 * 	Homework3_Ex5_Search.c
 *  Author: Mostafa Medhat
 ***************************************/


#include<stdio.h>

#define ARR_SIZE 10
int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARR_SIZE] = {0};
	int no_elements;
	int search_element, location_search_element;
	char search_flag = 0;


	/* Entering number of elements of an array */
	printf("Enter no. of elements: ");
	scanf("%d", &no_elements);

	/* Entering elements of the array */
	printf("Enter elements:\n");
	for(int i = 0 ; i<no_elements; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* Displaying array before insertion */
	printf("Array:\n");
	for(int i = 0; i < no_elements; i++)
	{
		printf("%d ",arr[i]);
	}

	/* Entering Element you want to search */
	printf("\nEnter a new element: ");
	scanf(" %d", &search_element);

	/* Searching for the element */
	for(int i = 0; i<no_elements; i++)
	{
		if(search_element == arr[i])
		{
			location_search_element = i;
			search_flag = 1;
			break;
		}
	}

	/* Displaying location if found */
	if(search_flag)
	{
		printf("Number found at the location: %d", location_search_element+1);
	}
	else
	{
		printf("Number not found!");
	}
}
