/***************************************
 * 	Homework5_Ex1_Student_Struct.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

struct SStudent
{
	char name[20];
	int roll;
	float mark;
};

struct SStudent Student_ReadData(void);
void Student_PrintData(struct SStudent student);

int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct SStudent stud = Student_ReadData();
	Student_PrintData(stud);

}

struct SStudent Student_ReadData(void)
{
	struct SStudent a;
	printf("Enter information of the student:\nEnter name of student: ");
	gets(a.name);
	printf("Enter roll number: ");
	scanf("%d", &a.roll);
	printf("Enter marks: ");
	scanf("%f", &a.mark);
	return a;
}

void Student_PrintData(struct SStudent student)
{
	printf("\nDisplaying Information:\nName: %s\nRoll: %d\nMarks: %.2f\n", student.name, student.roll, student.mark);
}
