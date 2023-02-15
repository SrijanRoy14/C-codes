#include<stdio.h>

int main()
{
    int n,i,d;

    printf("Enter the amount of rupees ");
    scanf("%i",&n);
    printf("Minimum no. of notes required :--\n");
    printf(" Enter 1 for Rs 100 notes\n");
    printf(" Enter 2 for Rs 50 notes\n");
    printf(" Enter 3 for Rs 10 notes\n");
    printf(" Enter 4 for Rs 2 notes\n");
    printf(" Enter 5 for Re 1 notes\n");
    printf("Enter your choice ");
    scanf("%i",&i);
    switch(i)
    {
    case 1:
        d=n/100;
        printf("Minimum no. of Rs 100 notes required %i",d);
        break;
    case 2:
        d=n/50;
        printf("Minimum no. of Rs 50 notes required %i",d);
        break;
    case 3:
        d=n/100;
        printf("Minimum no. of Rs 10 notes required %i",d);
        break;
    case 4:
        d=n/2;
        printf("Minimum no. of Rs 2 notes required %i",d);
        break;
    case 5:
        d=n/1;
        printf("Minimum no. of Rs 100 notes required %i",d);
        break;
    default:
        printf("Wrong choice");
    }
    return 0;
}