/***************************************
 * 	Homework3_Ex4_Insert.c
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
	int new_element;
	int location_new_element;

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
	printf("Array before insertion:\n");
	for(int i = 0; i < no_elements; i++)
	{
		printf("%d ",arr[i]);
	}

	/* Entering the new elemetn */
	printf("\nEnter a new element: ");
	scanf("%d", &new_element);

	/* Entering location of the new element */
	printf("Enter the location of new element: ");
	scanf("%d", &location_new_element);

	/* Inserting the new element in the array */
	for(int i = no_elements; i>=location_new_element; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[location_new_element-1] = new_element;
	no_elements++;



	/* Displaying array after insertion */
	printf("Array after insertion:\n");
	for(int i = 0; i < no_elements; i++)
	{
		printf("%d ",arr[i]);
	}

}

