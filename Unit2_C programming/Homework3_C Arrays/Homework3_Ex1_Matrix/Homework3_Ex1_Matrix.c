/***************************************
 * 	Homework3_Ex1_Matrix.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

void main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float a[2][2] = {0.0};
	float b[2][2]= {0.0};
	printf("Enter the elements of 1st matrix:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("Enter a%d%d: ", i+1,j+1);
			scanf("%f", &a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("Enter b%d%d: ", i+1,j+1);
			scanf("%f", &b[i][j]);
		}
	}
	printf("Sum of Matrix:\n");
	for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				printf("%.2f\t ", (a[i][j]+b[i][j]));
			}
			printf("\n");
		}
}
