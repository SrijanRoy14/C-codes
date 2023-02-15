#include <stdio.h>
   int main ()
    {
	 int number[100];
        int i, j, a, n,k,c=0;
        printf("Enter the value of N: ");
        scanf("%d", &n);
        printf("\nEnter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
		  for (j = i + 1; j < n; ++j) 
            {
			  if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("\nThe numbers arranged in descending order are given below:\n");
        for (i = 0; i < n; ++i) 
        {
            printf("%d ", number[i]);
        }
        printf("\n\nEnter the no. you want to search in the array: ");
        scanf("%d",&k);
        for (i = 0; i < n; ++i) 
        {
		  if(number[i]==k)
            c=c+1;
		}
        if(c!=0)
            printf("\nThe %d Number has been succesfully found in the array",k);
		else
			printf("\nNumber not present in array");
	return 0;
 }
