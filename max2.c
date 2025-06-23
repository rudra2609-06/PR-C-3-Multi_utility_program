// Calculation of maximum number from four inputs "using less than operator"
//  Rudra Thakkar
//  23-06-2025

#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("Enter number 1: \n");
	scanf("%d", &a);
	printf("Enter number 2: \n");
	scanf("%d", &b);
	printf("Enter number 3: \n");
	scanf("%d", &c);
	printf("Enter number 4: \n");
	scanf("%d", &d);

	if (a == b && b == c && c == d)
	{
		printf("All are equal\n");
	}

	else if (b < a && c < a && d < a)
	{
		printf("A is maximum\n");
	}

	else if (c < b && d < b)
	{
		printf("B is maximum\n");
	}
	
	else if (c < d)
	{
		printf("D is maximum\n");
	}
	
	else
	{
		printf("C is maximum\n");
	}

	return 0;
}