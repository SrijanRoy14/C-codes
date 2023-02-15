#include <stdio.h>

int main()
{
    int num,r,sum,temp;
    int m;
    printf("Input ending number of range : ");
    scanf("%d",&m);
    printf("Armstrong numbers in given range are: ");
    for(num=1;num<=m;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
return 0;
}
