#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
    struct Node * perv;
};
struct Node * head = NULL;
void display()
{
    struct Node * ptr = head;
    if(head == NULL)
        printf("List is Empty...");

    else
    {
        while (ptr->next != head)       //ptr->perv != head
        {
            printf("%d  ",ptr->data);
            ptr = ptr->next;            //ptr = ptr->perv;
        }
        printf("%d  ",ptr->data);
    }
    printf("\n");
}
void insert()
{
    int val;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = temp;
        temp->perv = ptr;
        temp->next = head;
        head->perv = temp;
    return;
}
void FirstInsert()
{
    int val;
    printf("\nEnter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    
    while(ptr->next!= head)
        ptr = ptr->next;
        ptr->next = temp;
        temp->perv = ptr;
        temp->next = head;
        head->perv = temp;
        head = temp;
    return;
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
    while (ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    temp->perv = ptr;
    ptr->next = temp;
    return;
}
void delete()
{
    struct Node * ptr = head,*p;
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

    while(ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    return;
}
void FirstDelete()
{
    struct Node * ptr = head;
    struct Node * p = head;
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

    while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = p->next;
        p->next->perv = ptr;
        head = p->next;
    free(p);
    return;
}
void MidDelete()
{
    int pos;
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    struct Node * ptr = head;
    struct Node * p;
    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->perv = p;
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
                insert();
            break;

            case 2:
                FirstInsert();
            break;

            case 3:
                MidInsert();
            break;

            case 4:
                delete();
            break;

            case 5:
                FirstDelete();
            break;

            case 6:
                MidDelete();
            break;

            case 9:
                printf("List is : ");
                display();
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