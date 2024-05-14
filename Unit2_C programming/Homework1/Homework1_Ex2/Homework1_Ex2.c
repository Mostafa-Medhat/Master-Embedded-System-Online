/***************************************
 * 	Homework1_Ex2.c
 *  Author: Mostafa Medhat
 ***************************************/

#include <stdio.h>

int main(void)
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 0;
	printf("Enter a integer: ");
	scanf("%d", &num);
	printf("You entered: %d",num);
	return 0;
}
