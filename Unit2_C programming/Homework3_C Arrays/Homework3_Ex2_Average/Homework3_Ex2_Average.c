/***************************************
 * 	Homework3_Ex2_Average.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num[100]={};
	float avg, sum;
	int size_num;

	do {
		printf("Enter a number between 1 and 100");
		printf("\nEnter number of elements: ");
		scanf("%d",&size_num);
	}
	while(size_num<=0 || size_num>100);

	for(int i =0; i< size_num; i++)
	{
		printf("%d.  Enter a number: ",i+1);
		scanf("%f",&num[i]);
		sum += num[i];

	}

	avg = sum / size_num;
	printf("Average = %.2f", avg);

	return 0;
}
