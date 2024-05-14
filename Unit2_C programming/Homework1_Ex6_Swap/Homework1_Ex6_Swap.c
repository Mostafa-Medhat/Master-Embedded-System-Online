/***************************************
 * 	Homework1_Ex6_Swap.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a=0, b=0;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	a += b;
	b = a - b;
	a = a - b;
	printf("After swapping value of a = %f", a);
	printf("\nAfter swapping value of a = %f", b);

}
