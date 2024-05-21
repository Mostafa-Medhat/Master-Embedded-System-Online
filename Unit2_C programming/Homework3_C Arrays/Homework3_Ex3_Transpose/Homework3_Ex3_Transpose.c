/***************************************
 * 	Homework3_Ex3_Transpose.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int rows,cols;
	float mtrx[10][10],t_mtrx[10][10];

	printf("Enter number of rows and columns of the matrix: ");
	scanf("%d%d", &rows, &cols);
	printf("Enter elements of matrix:\n");

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			printf("Enter a%d%d: ", i+1,j+1);
			scanf("%f", &mtrx[i][j]);
		}
	}

	printf("\nEntered matrix:\n");
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			printf("%.2f  ", mtrx[i][j]);
		}
		printf("\n\n");
	}

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			t_mtrx[i][j] = mtrx[j][i];
		}
	}

	printf("\nTransposed matrix:\n");
	for(int i=0; i<cols; i++)
	{
		for(int j=0; j<rows; j++)
		{
			printf("%.2f  ", t_mtrx[i][j]);
		}
		printf("\n\n");
	}

}

