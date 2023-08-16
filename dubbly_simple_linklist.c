#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
    struct Node * perv;
};
struct Node * head = NULL;
void Display()
{
    struct Node * ptr = head;
    if(head == NULL)
        printf("\tList is Empty...");

    else
    {
        while(ptr != NULL)
        {
            printf("  %d",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void Insert()
{
    int val;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    temp->perv = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }

    while(ptr->next != NULL)
    ptr = ptr->next;
    ptr->next = temp;
    temp->perv = ptr; 
    return;
}
void InsertFirst()
{
    int val;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->perv = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }
    
    else
    {
        temp->next = ptr;
        temp->perv = ptr;
        head = temp;
    }
}
void MidInsert()
{
    int val,pos;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->perv = NULL;

    while (ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    temp->perv = ptr;
    return;
}
void Delete()
{
    struct Node * ptr = head;
    struct Node * p;
    if(head == NULL)
    {
        printf("List is Already Empty...\n");
        return;
    }

    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        printf("Now List is Empty...\n");
        return;
    }

    while(ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void DeleteFirst()
{
    struct Node * ptr = head;
    if(head == NULL)
    {
        printf("List is Already Empty...\n");
        return;
    }
    
    else if(ptr->next == head)
    {
        head = NULL;
        free(ptr);
        printf("Now List is Empty...\n");
        return;
    }
    head = ptr->next;
    free(ptr);
    return;
}
void MidDelete()
{
    int pos;
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    struct Node * ptr = head;
    struct Node * p;
    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}
int main()
{
    int ch;
    do
    {
        printf("\n\t1->Last Insert");
        printf("\n\t2->First Insert");
        printf("\n\t3->Mid Insert");
        printf("\n\t4->Last Delete");
        printf("\n\t5->First Delete");
        printf("\n\t6->Mid Delete");
        printf("\n\t9->Display");
        printf("\n\tEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                Insert();
            break;

            case 2:
                InsertFirst();
            break;

            case 3:
                MidInsert();
            break;

            case 4:
                Delete();
            break;

            case 5:
                DeleteFirst();
            break;

            case 6:
                MidDelete();
            break;

            case 9:
                printf("List is : ");
                Display();
            break;

            case 0:
            break;

            default:
                printf("\nEnter Valid Choice...\n");
            break;
        }
    }
    while(ch!=0);
}