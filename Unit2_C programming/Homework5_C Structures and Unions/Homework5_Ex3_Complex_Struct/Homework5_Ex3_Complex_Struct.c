/***************************************
 * 	Homework5_Ex3_Complex_Struct.c
 *  Author: Mostafa Medhat
 ***************************************/


#include<stdio.h>
#include<string.h>

struct SComplex
{
	float real;
	float imaginary;
};

struct SComplex Complex_ReadData(char var[]);
struct SComplex Complex_SumData(struct SComplex a, struct SComplex b);
void Complex_PrintData(struct SComplex result);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/* Enter the data vaules of the complex numbers*/
	struct SComplex x,y,z;
	x = Complex_ReadData("1st");
	y = Complex_ReadData("2nd");

	/* Sum the complex numbers and print the result */
	z = Complex_SumData(x, y);
	Complex_PrintData(z);

}

struct SComplex Complex_ReadData(char var[])
{
	struct SComplex cmplx;
	printf("\nEnter %s complex number:\n", var);
	printf("Enter the real and imaginary part respectively: ");
	scanf("%f %f", &cmplx.real, &cmplx.imaginary);
	return cmplx;
}

struct SComplex Complex_SumData(struct SComplex a, struct SComplex b)
{
	struct SComplex sum;
	sum.real = a.real + b.real;
	sum.imaginary = a.imaginary + b.imaginary;
	return sum;
}

void Complex_PrintData(struct SComplex result)
{
	printf("\nSum = %.2f + %.2fi", result.real, result.imaginary);
}
