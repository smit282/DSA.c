#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
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
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

void LastInsert()
{
    int val;
    printf("-->Enter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }

    while(ptr->next != NULL)
        ptr = ptr->next;
        ptr->next = temp;
    return;
}

void FirstInsert()
{
    int val;
    printf("-->Enter Value : ");
    scanf("%d",&val);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }

    else
    {
        temp->next = ptr;
        head = temp;
    }
}

void MidInsert()
{
    int val,pos;
    printf("-->Enter Value : ");
    scanf("%d",&val);
    printf("\nEnter Position : ");
    scanf("%d",&pos);
    struct Node * ptr = head;
    struct Node * temp = malloc(sizeof(struct Node));
    temp->data = val;

    while(ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void LastDelete()
{
    struct Node * ptr = head;
    struct Node * p;
    if(head == NULL)
    {
        printf("List is Empty...\n");
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

void FirstDelete()
{
    struct Node * ptr = head;
    if(head == NULL)
    {
        printf("List is Already Empty...\n");
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

    while (ptr->data != pos)
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
        printf("\n1. Last Insert");
        printf("\n2. First Insert");
        printf("\n3. Mid Insert");
        printf("\n4. Last Delete");
        printf("\n5. First Delete");
        printf("\n6. Mid Delete");
        printf("\n7. Display");
        printf("\n\n-->Enter Your Choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                LastInsert();
            break;

            case 2:
                FirstInsert();
            break;

            case 3:
                MidInsert();
            break;

            case 4:
                LastDelete();
            break;

            case 5:
                FirstDelete();
            break;

            case 6:
                MidDelete();
            break;

            case 7:
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