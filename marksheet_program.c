// Marksheet of student
// Rudra Thakkar
// 23-06-2025

#include <stdio.h>

int main()
{
	int mark1, mark2, mark3, rollno;
	float avg;
	char name[10];

	printf("Enter your name\n");
	scanf("%s", name);
	printf("Enter your roll no.\n");
	scanf("%d", &rollno);
	printf("Enter marks of Subject 1\n");
	scanf("%d", &mark1);
	printf("Enter marks of Subject 2\n");
	scanf("%d", &mark2);
	printf("Enter marks of Subject 3\n");
	scanf("%d", &mark3);
	avg = (mark1 + mark2 + mark3) / 3.0;
	printf("\n ___________________________________________");
	printf("\n|               MARKSHEET                   |");
	printf("\n|___________________________________________|");
	printf("\n| Roll No        : %-24d |", rollno);
	printf("\n| Name           : %-24s |", name);
	printf("\n| Marks of Sub1  : %-24d |", mark1);
	printf("\n| Marks of Sub2  : %-24d |", mark2);
	printf("\n| Marks of Sub3  : %-24d |", mark3);
	printf("\n| Average Marks  : %-25.2f|", avg);
	printf("\n|___________________________________________|\n");

	if (mark1 > 33 && mark2 > 33 && mark3)
	{
		printf("You are passed\n");

		if (avg > 80)
		{
			printf("Your grade is A\n");
		}

		else if (avg > 70)
		{
			printf("Your grade is B\n");
		}

		else if (avg > 60)
		{
			printf("Your grade is C\n");
		}

		else
		{
			printf("Your grade is D\n");
		}
	}
	else
	{
		printf("You are failed\n");
	}

	return 0;
}