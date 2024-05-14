/***************************************
 * 	Homework2_Ex3_Largest.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float a=0, b=0, c=0;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	printf("Enter value of c: ");
	scanf("%f", &c);

	if(a>=b)
	{
		if(a>=c)
		{
			printf("%.2f is the largest number", a);
		}
		else
		{
			printf("%.2f is the largest number", c);
		}
	}
	else
	{
		if(b>=c)
		{
			printf("%.2f is the largest number", b);
		}
		else
		{
			printf("%.2f is the largest number", c);
		}
	}
}
