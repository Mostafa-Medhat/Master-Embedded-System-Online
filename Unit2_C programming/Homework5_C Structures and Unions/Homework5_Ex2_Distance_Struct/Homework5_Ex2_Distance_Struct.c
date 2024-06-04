/***************************************
 * 	Homework5_Ex2_Distance_Struct.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

struct SDistance
{
	int feet;
	float inches;
};

struct SDistance Distance_ReadData(char var[]);
struct SDistance Distance_SumData(struct SDistance a, struct SDistance b);
void Distance_PrintData(struct SDistance distance);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct SDistance x,y,z;

	x = Distance_ReadData("1st");
	y = Distance_ReadData("2nd");

	z = Distance_SumData(x, y);
	Distance_PrintData(z);

}

struct SDistance Distance_ReadData(char var[])
{
	struct SDistance dist;
	printf("Enter information of %s distance", var);
	printf("\nEnter feet: ");
	scanf("%d", &dist.feet);
	printf("Enter inches: ");
	scanf("%f", &dist.inches);
	printf("\n");

	return dist;
}

struct SDistance Distance_SumData(struct SDistance a, struct SDistance b)
{
	struct SDistance sum;
	sum.feet = a.feet + b.feet;
	sum.inches = a.inches + b.inches;
	if(sum.inches > 12)
	{
		sum.feet++;
		sum.inches -=12;
	}

	return sum;
}

void Distance_PrintData(struct SDistance distance)
{
	printf("Sum of distances= %d'- %.2f\"", distance.feet, distance.inches);
}
