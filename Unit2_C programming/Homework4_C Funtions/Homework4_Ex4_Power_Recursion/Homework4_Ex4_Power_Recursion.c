/***************************************
 * 	Homework4_Ex4_Power_Recursion.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

int Calc_Power(int num, int pow);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int base, power;

	/* Entering the base and power numbers */
	printf("Enter a base number: ");
	scanf("%d", &base);
	do
	{
		printf("Enter a power number(positive number): ");
		scanf("%d", &power);
	}
	while(power<0);

	printf("%d^%d = %d",base, power, Calc_Power(base, power));

}

int Calc_Power(int num, int pow)
{
	if(pow == 0)
	{
		return 1;
	}
	return (num * Calc_Power(num, pow-1) );
}
