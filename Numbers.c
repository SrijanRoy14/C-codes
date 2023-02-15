#include<stdio.h>

int main()
{
    int n=0,d,m,k,i=0,j=0;

    printf("Enter a number ");
    scanf("%i",&m);
    while(m>0)
    {
        k=m%10;
        
        if((i==0)&&(k==0))
            j++;
        else
            i++;
        
        n=(n*10)+k;
        m=m/10;
    }

    while(n>0)
    {
        d=n%10;
        if(d==0)
            printf(" Zero");
        else if(d==1)
            printf(" One");
        else if(d==2)
            printf(" Two");
        else if(d==3)
            printf(" Three");
        else if(d==4)
            printf(" Four");
        else if(d==5)
            printf(" Five");
        else if(d==6)
            printf(" Six");
        else if(d==7)
            printf(" Seven");
        else if(d==8) 
            printf(" Eight");
        else if(d==9)
            printf(" Nine");

        n=n/10;
    }
    if(j!=0)
        for(int l=0; l<j; l++)
            printf(" Zero");
    return 0;
}