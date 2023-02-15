#include<stdio.h>
  
    void main()
    {
        int a,b,c;
        
        printf("\n Please enter the value of A: ");
        scanf("%d",&a);
        printf("\n Please enter the value of B: ");
        scanf("%d",&b);
        printf("\n Please enter the value of C: ");
        scanf("%d",&c);
        if (a<b && a<c)
            printf("\n %d is Minimum ",a);
        else if(b<a && b<c)
            printf("\n %d is Minimum ",b);
        else
            printf("\n %d is Minimum ",c);

        if (a>b && a>c)
            printf("\n\n %d is Maximum ",a);
        else if(b>a && b>c)
            printf("\n\n %d is Maximum ",b);
        else
            printf("\n\n %d is Maximum ",c);

      
    }
