#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;              
    struct node *nextptr; 
} * head,*nnode, *tmp;
void createNodeList(); 
void displayList();
void rev_display();
void new_node();
void insert();
void delete();
void end();
void menu();
int search();
void sort();
void end();
int count();
int c=0,n,ch,num,k=0;
int main()
{
    printf("\n\n Linked List : Operations on Singly Linked List :\n\n");
    menu();
    return 0;
}
void new_node()
{
    nnode=(struct node *)malloc(sizeof(struct node));
}
void menu()
{   
    printf("\nChoose the actions you want to perform on the created singly link list:\n1)Create\n2)Insertion\n3)Deletion\n4)Search\n5)Sort\n6)Count\n7)Display\n8)Reverse Display\n9)Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: createNodeList();
                break;
        case 2: insert();
                break;
        case 3: delete();
                break;
        case 4:printf("\nEnter the no. you wish to search: ");
            scanf("%d",&n);
            search(n); 
            menu();
            break;
        case 5: sort();
                break;
        case 6: printf("\nNo. of elements in the linked list: %d",count(1));
                menu();
                break;
        case 7: printf("\n Data entered in the list : \n");
                displayList();
                break;
        case 8: printf("\n Data entered in the list in reverse format : \n");
                rev_display(head);
                menu();
                break;
        case 9: exit(0);
                break;
        default: printf("\nSorry, Wrong choice!!!\n");
    }
}
void createNodeList()
{
    n=1;
        while (n != 0)
        {
            head = (struct node *)malloc(sizeof(struct node));
            if (head == NULL) 
            {
                printf(" Memory can not be allocated.");
            }
            else
            {
                printf(" Input data for header node  : ");
                scanf("%d", &num);
                head->num = num;
                head->nextptr = NULL; 
                tmp = head;
                printf("Do you wish to continue ? : ");
                scanf("%d", &n);
                while (n != 0)
                {
                    new_node();
                    if (nnode == NULL)
                    {
                        printf(" Memory can not be allocated.");
                        break;
                    }
                    else
                    {
                        printf(" Input data for node : ");
                        scanf(" %d", &num);
                        nnode->num = num;      
                        nnode->nextptr = NULL; 
                        tmp->nextptr = nnode; 
                        tmp = tmp->nextptr;
                    }
                    printf("Do you wish to continue ? : ");
                    scanf("%d", &n);
                }
            }
        }
        menu();
}
void insert()
{
    n=1;
    while(n!=0)
    {
        printf("\nEnter:\n1)To insert in the beginning\n2)To insert before anode(data)\n3)To insert at the end\n4)Insert after a given node(data)");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("\nEnter the value of the new header node:");
                    new_node();
                    scanf("%d",&num);
                    nnode->num=num;
                    nnode->nextptr=head;
                    head=nnode;
            break;
            case 2: if(head==NULL)
                    {
                        printf("\nThe list is empty\n");
                    }
                    else if(head->nextptr==NULL)
                    {
                        printf("\nOnly one element in the list, you might want to insert from the header node\n");
                       
                    }
                    else
                    {   
                       printf("\nEnter the no. you wish to search: ");
                        scanf("%d",&n);
                       int pos=search(n);
                        if(pos>=1)
                        {
                            if(pos>1)
                            printf("\nThe element has been found at more than one instance, value will be added before the first instance\n");
                            printf("\nEnter the value of the new node: ");
                            scanf("%d",&num);
                            new_node();
                                nnode->num=num;
                                tmp=head;
                                while(tmp->nextptr->num!=n)
                                {
                                    if(tmp->nextptr!=NULL)
                                    tmp=tmp->nextptr;
                                }
                                nnode->nextptr=tmp->nextptr;
                                tmp->nextptr=nnode;
                        }
                    }
        
            break;
            
            case 3: if(head==NULL)
                    {
                        printf("\nThe list is empty\n");
                    }
                    else
                    {   
                        printf("\nEnter the value of the new end node: ");
                        scanf("%d",&num);
                        new_node();
                        nnode->num=num;
                        tmp=head;
                        while(tmp->nextptr!=NULL)
                        {
                            tmp=tmp->nextptr;
                        }
                        tmp->nextptr=nnode;
                        nnode->nextptr=NULL;
                    }
            break;
            case 4: if(head==NULL)
                    {
                        printf("\nThe list is empty\n");
                    }
                    else
                    {   
                       printf("\nEnter the no. you wish to search: ");
                        scanf("%d",&n);
                       int pos=search(n);
                        if(pos>=1)
                        {
                            if(pos>1)
                            printf("\nThe element has been found at more than one instance, value will be added after the first instance\n");
                            printf("\nEnter the value of the new node: ");
                            scanf("%d",&num);
                            new_node();
                                nnode->num=num;
                                tmp=head;
                                while(tmp->num!=n)
                                {
                                    if(tmp->nextptr!=NULL)
                                    tmp=tmp->nextptr;
                                }
                                nnode->nextptr=tmp->nextptr;
                                tmp->nextptr=nnode;
                        }
                    }
        
            break;
            default: printf("\nSorry, Wrong choice!!!\n");
            break;
        }
        printf(" Do you wish to continue ? : ");
        scanf("%d", &n);
    }
    menu();
}
int count(int c)
{
    tmp=head;
    if(head==NULL)
    {
        c=0;
        return c;
    }
    while(tmp->nextptr!=NULL)
    {
        c=c+1;
        tmp=tmp->nextptr;
    }
    return c;
}
void delete()
{   n=1;
    while(n!=0)
    {
        printf("\nEnter:\n1)To delete from the beginning\n2)To delete a target node(data)\n3)To delete the end node\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: if(head==NULL)
                    {
                        printf("\nThe list is empty\n");
                        menu();
                    }
                    else
                    {   
                        printf("\nEnter the no. of header node(s) you wish to delete: ");
                        scanf("%d",&num);
                        if(num>count(1))
                        {
                            printf("\nNo. of nodes you want to delete exceeds the total no. of elements in the list.\n");
                        }
                        else
                        {
                            for(int i=1;i<=num;i++)
                            {
                                head=head->nextptr;
                            }
                        }
                    }
            break;
            case 2:if(head==NULL)
                    {
                        printf("\nThe list is empty\n");
                    }
                    else if(head->nextptr==NULL)
                    printf("\nOnly one element in the list, you might want to delete the header node\n");
                    else
                    {   
                       printf("\nEnter the no. you wish to delete: ");
                        scanf("%d",&n);
                       int pos=search(n);
                        if(pos>=1)
                        {
                            printf("%d\n",pos);
                            if(pos>1)
                            {
                            printf("\nThe element has been found at more than one instance, value will be deleted for the first instance\n");
                            }
                            
                                tmp=head;
                                while(tmp->nextptr->num!=n)
                                {
                                    if(tmp->nextptr!=NULL)
                                    tmp=tmp->nextptr;
                                }
                                tmp->nextptr=tmp->nextptr->nextptr;
                        }
                    }
            break;
            case 3: if(head==NULL)
                {
                    printf("\nNo elements in the list\n");
                }
                else if(head->nextptr==NULL)
                printf("\nOnly one element in the list, you might want to delete the header node\n");
                else
                {   
                    tmp=head;
                    while(tmp->nextptr->nextptr!=NULL)
                    {
                        tmp=tmp->nextptr;
                    }
                    struct node * temp=tmp->nextptr;
                    tmp->nextptr = NULL;
                    free(temp);
                }
            break;
            default: printf("\nSorry, Wrong choice!!!\n");
            break;
        }
        printf(" Do you wish to continue ? : ");
        scanf("%d", &n);
    }
    menu();  
}
int search(int num)
{
    if(head==NULL)
    {
        printf("\nThe list is empty\n");
        menu();
    }
    else
    {
        
            
            tmp=head;int pos=0,c=0;
            while(tmp->nextptr!=NULL)
            {   pos=pos+1;
                if(tmp->num==num)
                {
                    c=c+1;
                    
                }
            tmp=tmp->nextptr;
            } 
            if(c!=0)
            {
            printf("\nThe element has been found\n");
            return c;
            }
            else
            {
            printf("\nThe element has not been found\n");
            return c;
            }
    }
    
    
}
void displayList()
{
    struct node *tmp=head;
    if (tmp == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        while (tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num); 
            tmp = tmp->nextptr;               
        }
    }
    menu();
}
void rev_display(struct node * tmp)
{
  if(tmp==NULL)
  {
      printf("\nThe list is empty\n");
      return;
  }  
  else
  {
      rev_display(tmp->nextptr);
      printf("Data: %d\n",tmp->num);
  }
}
void sort()
{
    if(head==NULL)
    {
        printf("\nThe list is empty\n");
        menu();
    }
    else
    {  
        tmp=head;struct node *index=NULL;int pos=0;n=1;
        while(n!=0)
        {
            while(tmp!=NULL)
            {
                index=tmp->nextptr;
                while(index!=NULL)
                {
                    if(tmp->num>index->num)
                    {
                        pos=tmp->num;
                        tmp->num=index->num;
                        index->num=pos;
                    }
                    index=index->nextptr;
                }
                tmp=tmp->nextptr;
            }
            printf("\nThe linked list has been sorted successfully use 'Display' to view\n");
        }
    menu();
    }
}
void end()
{
    exit(0);
}