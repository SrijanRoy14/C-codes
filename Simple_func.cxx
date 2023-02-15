#include<stdio.h>
int calsum(int, int, int);
void main()
{
	int a, b, c;
	int sum=0;

	printf("\nEnter any three numbers ");

	scanf("%d %d %d", &a, &b, &c);

	sum = calsum(a, b, c);
	printf("Sum %d", sum);
}

int calsum(int a, int b, int c)
{
	int d = a+b+c;

	return (d);
}