#include<stdio.h>
void fact();
void prime();
int main()
{
    printf("1.Factorial\n");
	printf("2.Prime or not\n");
	int k;
	do
	{
	int ch,a;
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
    switch(ch)
	{
	 case 1:
		fact();
		break;
     case 2:
		prime();
		break;
     default: printf("Sorry, wrong choice!");
	}
printf("\n\nEnter 1 to continue using the calculator and 0 to exit: ");
scanf("%d",&k);
}
while(k==1);
return 0;
}
void fact()
{
	int fact=1,i,n=5;
	printf("\nEnter the no. ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial= %d",fact);
}
void prime()
{
	int p=0,i,n;

	printf("\nEnter value: ");
	scanf("%d",&n);
    for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
    if(p==0)
		printf("Number is prime");
	else
		printf("Not prime");
}





