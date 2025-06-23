//Find minimum number from 4 inputs "using greater than sign"
// Rudra Thakkar
// 23-06-2025

#include<stdio.h>

int main(){

	int a,b,c,d;
	printf("Enter number 1: \n");
	scanf("%d",&a); 
	printf("Enter number 2: \n");
	scanf("%d",&b);
	printf("Enter number 3: \n");
	scanf("%d",&c);
	printf("Enter number 4: \n");
	scanf("%d",&d);

	if (a < b && a < c && a < d)
	{
		printf("A is minimum\n");
	}

	else if (b > a && c > a && c > a)
	{
		printf("A is minimum\n");
	}

	else if (c > b && d > b)
	{
		printf("B is minimum\n");
	}

	else if (d > c)
	{
		printf("C is minimum\n");
	}
	
	else{
		printf("D is minimum\n");
	}
	
	
	

	return 0;
}