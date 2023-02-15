#include<stdio.h>

int main()
{
    int n,d,i=0;
    printf("Enter the amount Rs ");
    scanf("%i",&n);
    int curr[5]= {100,50,10,2,1};
    while(n>0)
    {
        d=n/curr[i];
        if(d==0)
        {
            n=n;
            printf("Minimum no. of Rs %i", curr[i]);
            printf(" notes required %i\n",d);
        }
        else
        {
            n=n%curr[i];
            printf("Minimum no. of Rs %i", curr[i]);
            printf(" notes required %i\n",d);
        }
        i++;
    }
    return 0;
}