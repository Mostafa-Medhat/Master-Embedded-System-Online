/***************************************
 * 	Homework4_Ex1_PrimeNumbers.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

void prime_numbers(int start, int end);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int t1 = 0,t2 = 0;
	printf("Enter two intervals: ");
	scanf("%d%d", &t1, &t2);

	printf("Prime numbers between %d and %d are: ", t1, t2);
	prime_numbers(t1, t2);

}

void prime_numbers(int start, int end)
{
	char prime_flag = 0;
	for(int i=start; i<end; i++)
	{
		for(int j = 2; j<i/2; j++)
		{
			if(i % j == 0)
			{
				prime_flag = 0;
				break;
			}
			else
			{
				prime_flag = 1;
			}
		}
		if(prime_flag)
		{
			printf("%d ", i);
		}
	}
}
