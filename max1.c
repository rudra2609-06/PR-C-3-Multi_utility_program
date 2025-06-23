//Calculation of maximum number from four inputs "using greater than operator"
// Rudra Thakkar
// 23-06-2025


#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter number 1: \n");
	scanf("%d",&a); 
	printf("Enter number 2: \n");
	scanf("%d",&b);
	printf("Enter number 3: \n");
	scanf("%d",&c);
	printf("Enter number 4: \n");
	scanf("%d",&d);

	if (a == b && b == c && c == d)
	{
		printf("All are equal\n");
	}

	else if (a>d && a>b && a > c)
	{
		printf("A is max\n");
	}

	else if (b > c && b > d)
	{
		printf("B is max\n");
	}

	else if (c > d)
	{
		printf("C is max\n");
	}
	
	else{
		printf("D is max\n");
	}
	
	
	

	return 0;
}