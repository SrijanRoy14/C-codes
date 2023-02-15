
#include<stdio.h>  
  
int main()  
{   
 int k;
 printf("1. Addition\n2. Subtraction\n3. Multiplication\n3. Division\n");
do
  {
   int a, b,c=0;  
   printf("\nEnter your choice: ");  
   scanf("%d", &c);  
   printf("Enter 2 integer numbers: ");  
   scanf("%d %d", &a, &b);  
   
   switch(c)  
    {  
        case 1:k=(a+b); 
		       printf("%d + %d = %d\n", a, b, k);
		        //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
				//scanf("%d",&k);  
               break;  
  
        case 2: k= (a-b);
		printf("%d - %d = %d\n", a, b, k);
		        //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
			    //scanf("%d",&k);  
                break;  
  
        case 3: k=(a*b);
		printf("%d x %d = %d\n", a, b, k); 
		        //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
				//scanf("%d",&k); 
                break;  
  
        case 4: if( b != 0)
		        {
			     k=(a/b);
				 printf("%d / %d = %d\n", a, b,k); 
				 //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
				 //scanf("%d",&k); 
			    }
                else 
				{
				 printf("Number can't be divided by 0\n");
				 //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
				 //scanf("%d",&k); 
			    }
                break; 
			
  
        default: printf("You entered wrong choice\n");  
                 //printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
				 //scanf("%d",&k);
                 break;  
    }
	printf("\nEnter 1 to continue using the calculator and 0 to exit: ");
    scanf("%d",&k);  
}
while(k==1);
return 0;  
}  
