#include<stdio.h>

int main()
{
    int n,c=0;
    printf("Enter a number ");
    scanf("%i",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("Prime no.");
    else
        printf("Not a prime no.");
    return 0;
}