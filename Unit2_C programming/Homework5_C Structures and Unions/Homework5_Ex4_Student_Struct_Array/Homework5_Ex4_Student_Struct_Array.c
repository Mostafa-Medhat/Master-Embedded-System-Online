/***************************************
 * 	Homework5_Ex4_Student_Struct_Array.c
 *  Author: Mostafa Medhat
 ***************************************/

#include<stdio.h>
#include<string.h>

typedef struct S_Student
{
	char name[20];
	int roll;
	float mark;
}S_Student;

S_Student Student_ReadData(void);
void Student_PrintData(S_Student student);

#define SIZE 5
int main()
{
	/* These two lines to fix printf & scanf delay/hanging */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/* Define 10 student structs */
	S_Student students[SIZE];

	/* Enter data of the students */
	printf("Enter information of students:\n");
	for(int i = 0; i < SIZE; i++)
	{
		students[i] = Student_ReadData();
	}

	/* Print Entered data */
	printf("\nDisplaying information of students:\n");
	for(int i=0; i<SIZE; i++)
	{
		Student_PrintData(students[i]);
	}

}

S_Student Student_ReadData(void)
{
	S_Student stud;
	static char num = 1;
	printf("for roll number %d\n", num);
	stud.roll = num;
	printf("Enter name: ");
	scanf("%s", stud.name);
	printf("Enter marks: ");
	scanf("%f", &stud.mark);
	num++;
	return stud;
}

void Student_PrintData(S_Student student)
{
	printf("Information for roll number %d:\nName: %s\nMarks: %.2f\n", student.roll, student.name, student.mark);
}
