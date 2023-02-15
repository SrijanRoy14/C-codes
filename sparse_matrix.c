#include <stdio.h>
#include <stdlib.h>
void accept();
void create();
void display();
void reverse();
typedef struct node 
{
    int rindex,cindex,value;
}node;
node* triplet;
int r,c,nz=0;
int* arr;
int main()
{   
    triplet=(node *)malloc(sizeof(node));
    printf("\nEnter the no. of rows and coloumns: ");
    scanf("%d %d",&r,&c);
    arr=(int*)malloc((r*c)*sizeof(int));
    accept(r,c,arr);
    free(arr);
    free(triplet);
    return 0;
}
void accept(int r,int c,int* arr[][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter the value of %d row %d element: ",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }
    }
    create(r,c,arr);
}
void create(int r, int c, int* arr[][c])
{
    triplet[0].rindex=r;
    triplet[0].cindex=c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]!=0)
            {
            
                triplet=(node *)realloc(triplet,(nz+2)*sizeof(node));
                triplet[nz+1].rindex=i;
                triplet[nz+1].cindex=j;
                triplet[nz+1].value=arr[i][j];
                nz=nz+1;
            }
        }
    }
    triplet[0].value=nz;
    display(r,c,triplet,arr);
}
void display(int r, int c , node* triplet,int* arr[][c])
{
    printf("\nThe original matrix was: \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("\nThe triplet matrix is: \n\n");
    for(int i=0;i<=triplet[0].value;i++)
    {
        printf("%d %d %d ",triplet[i].rindex,triplet[i].cindex,triplet[i].value);
        printf("\n");
    }
    reverse(triplet); 
}
void reverse(node* triplet)
{
    int** rev = (int**)calloc(triplet[0].rindex , sizeof(int*));
    for (int i = 0; i < r; i++)
        rev[i] = (int*)calloc(triplet[0].cindex , sizeof(int));
    for(int i=1;i<=triplet[0].value;i++)
    {
        rev[triplet[i].rindex][triplet[i].cindex]=triplet[i].value;
    }
    printf("\n\nThe original matrix reconstructed from sparse matrix is: \n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            
            printf("%d ",rev[i][j]);
            
        }
        printf("\n");
    }
    free(rev);
}
