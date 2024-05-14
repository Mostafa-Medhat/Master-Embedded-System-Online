/***************************************
 * 	Homework1_Ex4_Multiply.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x=0,y=0;
	double prdct=0;
	printf("Enter two integers:");
	scanf("%f\t%f",&x,&y);
	prdct = x * y;
	printf("%lf", prdct);

}
