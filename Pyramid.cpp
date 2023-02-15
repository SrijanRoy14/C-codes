#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Please Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
 int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    m=n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m-1;j++)
       {
           printf("  ");
       }
       for(int k=1;k<=i;k++)
       {
         printf("%d   ",i);
       }
       m--;
       printf("\n");
  }
    
    return 0;
    
}
