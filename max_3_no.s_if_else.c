#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%i %i %i", &a,&b,&c);
    int max=a;
    if(max<b)
    {
    max=b;
    }
    if(max<c)
    {  
    max=c;
    }
    printf("%i",max);

        return 0;
    }