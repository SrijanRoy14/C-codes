#include<stdio.h>
#include<math.h>

int main()
{
    int l,b,h;
    float a,s;

    printf("Enter the length,breadth and the hypotenuse respectively: ");
    scanf("%i %i %i", &l,&b,&h);

    if((l+b>h)&&(l+h>a)&&(b+h>a))
    {

        if((l==b)&&(l==h)&&(h==b))
        {
            a=(sqrt(3)/4)*(l*l);
            printf("It is an equilateral triangle with area %f",a);
        }
        else if((pow(h,2)==pow(l,2)+pow(b,2)))
        {
            a=(0.5)*(l*b);
            printf("It is a right angled triangle with area %f",a);

        }
        else if((l==h)||(l==b)||(b==h))
        {

            a=(0.5)*(l*b);
            printf("It is a isosceles triangle with area %f",a);

        }

        else
        {

            s=(l+b+h)/2;
            a=sqrt(s*(s-l)*(s-b)*(s-h));
            printf("It is a scalene triangle with area %f",a);
        }
    }
    else
        printf("The triangle cannot be formed");

    return 0;
}