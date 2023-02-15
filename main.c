/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,p; float sum;
    printf("Enter the no. of items"); 
    scanf("%d",&n);
    printf("Enter the price of each item"); 
    scanf("%d",&p); 
    if(n>1000)
    {
        sum= (n*p)-(0.10*(n*p));
        printf("%f",sum);
    }
    else
    {
        sum= n*p;
        printf("The price is %f",sum);
    }
        return 0;
    

    
}
