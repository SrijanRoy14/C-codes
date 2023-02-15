#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} * head=NULL, *nnode, *tmp;
void createNodeList();
void displayList();
void rev_display();
void new_node();
int menu_insert();
int menu_delete();
void menu();
int search();
int count();
void insrt_head();
void insrt_before();
void insrt_end();
void insrt_after();
void insrt_at();
void del_head();
void del_target();
void del_end();
int c = 0, n, ch, num, k = 0;
int main()
{
    printf("\n\n Linked List : Operations on Singly Linked List :\n\n");
    menu();
    return 0;
}
void new_node()
{
    nnode = (struct node *)malloc(sizeof(struct node));
}
void menu()
{
    printf("\n\nChoose the actions you want to perform on the created singly link list:\n1)Create\n2)Insertion\n3)Deletion\n4)Search\n5)Sort\n6)Count\n7)Display\n8)Reverse Display\n9)Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        createNodeList();
        break;
    case 2:
        n = 1;
        while (n != 0)
        {
            printf("\nEnter:\n1)To insert in the beginning\n2)To insert before anode(data)\n3)To insert at the end\n4)Insert after a given node(data)\n5)To insert at a given node(pos)");
            printf("\nEnter your choice: ");
            scanf("%d", &ch);
            menu_insert(ch);
        }
        menu();
        break;
    
    case 3:
        n = 1;
        while (n != 0)
        {
            printf("\nEnter:\n1)To delete from the beginning\n2)To delete a target node(data)\n3)To delete the end node\n");
            printf("\nEnter your choice: ");
            scanf("%d", &ch);
            n=menu_delete(ch);
        }
        menu();
        break;
    case 4:
        printf("\nEnter the no. you wish to search: ");
        scanf("%d", &n);
        search(n);
        menu();
        break;
    case 6:
        printf("\nNo. of elements in the linked list: %d", count(1));
        menu();
        break;
    case 7:
        printf("\n Data entered in the list : \n");
        displayList();
        break;
    case 8:
        printf("\n Data entered in the list in reverse format : \n");
        rev_display(head);
        menu();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("\nSorry, Wrong choice!!!\n");
    }
}
void createNodeList()
{
    n = 1;
    while (n != 0)
    {
        insrt_head();
        printf("Do you wish to continue ? : ");
        scanf("%d", &n);
        while (n != 0)
        {
            insrt_end();
            printf("Do you wish to continue ? : ");
            scanf("%d", &n);
        }
    }
    
    menu();
}
int menu_delete(int ch)
{
    switch (ch)
    {
    case 1:
        del_head();
        break;
    case 2:
        del_target();
        break;
    case 3:
        del_end();
        break;
    default:
        printf("\nSorry, Wrong choice!!!\n");
        break;
    }
    printf(" Do you wish to continue ? : ");
    scanf("%d", &n);
    return n;
}
int menu_insert(int ch)
{
    switch (ch)
    {
    case 1:
        insrt_head();
        break;
    case 2:
        insrt_before();
        break;
    case 3:
        insrt_end();
        break;
    case 4:
        insrt_after();
        break;
    case 5:insrt_at();
    break;
    default:
        printf("\nSorry, Wrong choice!!!\n");
        break;
    }
    printf(" Do you wish to continue ? : ");
    scanf("%d", &n);
    if (c != 1)
        return n;
}
int count(int c)
{
    tmp = head;
    if (head == NULL)
    {
        c = 0;
        return c;
    }
    while (tmp->nextptr != NULL)
    {
        c = c + 1;
        tmp = tmp->nextptr;
    }
    return c;
}
int search(int num)
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
        menu();
    }
    else
    {
        tmp = head;
        int pos = 0, c = 0;
        while (tmp != NULL)
        {
            pos = pos + 1;
            if (tmp->num == num)
            {
                c = c + 1;
                break;
            }
            tmp = tmp->nextptr;
        }
        if (c != 0)
        {
            printf("\nThe element has been found\n");
            return pos;
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
    struct node *tmp = head;
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
void rev_display(struct node *tmp)
{
    if (tmp == NULL)
    {
        printf("\nThe list is empty\n");
        return;
    }
    else
    {
        rev_display(tmp->nextptr);
        printf("Data: %d\n", tmp->num);
    }
}
void insrt_head()
{
    printf("\nEnter the value of the new header node: ");
    new_node();
    scanf("%d", &num);
    nnode->num = num;
    nnode->nextptr = head;
    head = nnode;

}
void insrt_before()
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
    }
    
    else
    {
        printf("\nEnter the no. you wish to search: ");
        scanf("%d", &n);
        tmp=head;
        if (tmp->num==n)
        {
            printf("\nElement found at the header position, performing insertion.\n");
            insrt_head();
        }
            
        else
        {
           while ((tmp->nextptr->num != n))
            {
                tmp = tmp->nextptr;
                if (tmp->nextptr == NULL)
                break;
            }
            if(tmp->nextptr==NULL)
            {
                printf("\nThe element couldn't be found.\n");
            }
            else
            {
                printf("\nThe element has been found.\n\n");
                printf("\nEnter the value of the new node: ");
                scanf("%d", &num);
                new_node();
                nnode->num = num;
                nnode->nextptr = tmp->nextptr;
                tmp->nextptr = nnode;
            }
            
        }
    }
}
void insrt_end()
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
    }
    else
    {
        printf("\nEnter the value of the new end node: ");
        scanf("%d", &num);
        new_node();
        nnode->num = num;
        tmp = head;
        while (tmp->nextptr != NULL)
        {
            tmp = tmp->nextptr;
        }
        tmp->nextptr = nnode;
        nnode->nextptr = NULL;
    }
}
void insrt_after()
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
    }
    else
    {
        printf("\nEnter the no. you wish to search: ");
        scanf("%d", &n);
        tmp=head;
        while (tmp->num != n)
        {
            if (tmp->nextptr == NULL)
            {
                c=1;
                break;
            }
            tmp = tmp->nextptr;
        }
        if(c==1)
        printf("\nThe element couldn't be found.\n");
        else
        {
            printf("\nThe element has been found.\n");
            printf("\nEnter the value of the new node: ");
            scanf("%d", &num);
            new_node();
            nnode->num = num;
            nnode->nextptr = tmp->nextptr;
            tmp->nextptr = nnode;
        }
    }
}
void insrt_at()
{
    if (head == NULL)
            {
                printf("\nThe list is empty\n");
            }
            
            else
            {
                printf("\nEnter the position at which you wish to enter the new node: ");
                int pos;
                scanf("%d", &pos);
                if (pos > count(1))
                {
                    printf("\nPosition at which you want to insert exceeds the total no. of elements in the list. You might want to try inserting at end.");
                }
                else if(pos==1||head->nextptr==NULL)
                {
                    insrt_head();
                }
                    
                else
                {
                    printf("\nEnter the value of the new node: ");
                    scanf("%d", &num);
                    new_node();
                    nnode->num = num;
                    tmp = head;
                    for (int i = 2; i <pos; i++)
                    {
                        if (tmp->nextptr != NULL)
                            tmp = tmp->nextptr;
                    }
                    nnode->nextptr = tmp->nextptr;
                    tmp->nextptr = nnode;
                }
            }
}
void del_head()
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
        menu();
    }
    else
    {
        head = head->nextptr;
        printf("\nHeader node successfully deleted.\n");
            
    }
}
void del_target()
{
    if (head == NULL)
    {
        printf("\nThe list is empty\n");
    }
   
    else
    {
        printf("\nEnter the no. you wish to delete: ");
        scanf("%d", &n);
        tmp=head;
        if (tmp->num==n)
        {
            printf("\nElement found at the header position, performing deletion.\n");
            del_head();
        }
            else
            {
                
                while (tmp->nextptr->num != n)
                {
                    tmp = tmp->nextptr;
                    if (tmp->nextptr == NULL)
                    break;
                }
                if(tmp->nextptr==NULL)
                {
                    printf("\nThe element couldn't be found.\n");
                }
                else
                {
                   printf("\nThe element has been found.\n");
                   tmp->nextptr = tmp->nextptr->nextptr;
                   printf("\nDeletion Successfull\n");  
                }
        }
    }
}
void del_end()
{
    if (head == NULL)
    {
        printf("\nNo elements in the list\n");
    }
    else if (head->nextptr == NULL)
    {
        printf("\nOnly one element in the list, you might want to delete the header node\n");
        del_head();
    }
    else
    {
        tmp = head;
        while (tmp->nextptr->nextptr != NULL)
        {
            tmp = tmp->nextptr;
        }
        struct node *temp = tmp->nextptr;
        tmp->nextptr = NULL;
        free(temp);
        printf("\nDeletion Successfull\n");
    }
}