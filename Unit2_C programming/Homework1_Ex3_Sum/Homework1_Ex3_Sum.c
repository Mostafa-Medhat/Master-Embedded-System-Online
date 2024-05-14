/***************************************
 * 	Homework1_Ex3_Sum.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x =0,y =0;
	printf("Enter two integers:");
	scanf("%d\t%d",&x,&y);
	printf("Sum: %d",x+y);
	return 0;

}

