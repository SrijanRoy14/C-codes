#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float math;
    float chem;
    float phy;
};
int main(){
    int n;
    
    printf("Enter the number of students:- ");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student information\n");
    for(int i=0;i<n;i++){
       fflush(stdin);
	   printf("Enter the name:- ");
       gets(s[i].name);
       printf("Enter roll no.:- ");
       scanf("%d",&s[i].roll);
       printf("Enter Maths no.:- ");
       scanf("%f",&s[i].math);
       printf("Enter phy. no.:- ");
       scanf("%f",&s[i].phy);
       printf("Enter chem no.:- ");
       scanf("%f",&s[i].chem);
       printf("\t*******\n");
    }
    for(int i=0;i<n;i++){
        printf("Name is %s\n",s[i].name);
        printf("Roll no. is %d\n", s[i].roll);
        printf("Total no. is %f\n", s[i].math+s[i].chem+s[i].phy);
        printf("\t*******\n");
    }
    
}
