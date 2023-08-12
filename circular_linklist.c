#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

struct node * head = NULL;
void display()
{
    struct node * ptr = head;
    if(head == NULL)
    printf("list is empty");

    else
    {
        while(ptr->next != head)
        {
            printf(" %d ",ptr->data);
            ptr = ptr->next;
        }
        printf("%d",ptr->data);
    }   
    printf("\n"); 
}

void insert_end()
{
    int val;
    printf("enter value insert:");
    scanf("%d",&val);
    struct node * ptr = head;
    struct node * temp = malloc(sizeof(struct node));
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
        temp->next = head;
    return;
}

void delete_end()
{
    struct node * ptr = head;
    struct node * p;
    if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void first_insert()
{
    int val;
    printf("enter value insert:");
    scanf("%d",&val);
    struct node * ptr = head;
    struct node * temp = malloc(sizeof(struct node));
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
        temp->next = head;
        head = temp;
    return;
}

void first_delete()
{
    struct node * ptr=head;
    struct node * p= head;

    while(ptr->next != head)
        ptr = ptr->next;
        ptr->next = p->next;
        head = p->next;
        free(p);
    return;
}

void mid_insert()
{
    int position;
    printf("Enter position to Insert: ");
    scanf("%d",&position);

    int val;
    printf("Enter val to Insert: ");
    scanf("%d",&val);

    struct node * ptr = head;
    struct node * temp = malloc(sizeof(struct node));
    temp->data = val;

    while(ptr->data != position)
        ptr = ptr->next;
        temp->next = ptr->next;
        ptr->next = temp;
    return;
}

void mid_delete()
{
    int position;
    printf("Enter position to Insert: ");
    scanf("%d",&position);

    struct node * p;
    struct node * ptr = head;

    while(ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next ;
    free(ptr); 
}

int main()
{
    int ch;
    do
    {
        printf("\n1. Insert End\n");
        printf("2. Delete End\n");
        printf("3. First Insert\n");
        printf("4. First Delete\n");
        printf("5. Mid Insert\n"); 
        printf("6. Mid Delete\n"); 
        printf("9. display");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insert_end();
            break;

            case 2:
                delete_end();
            break;

            case 3:
                first_insert();
            break;

            case 4:
                first_delete();
            break;

            case 5:
                mid_insert();
            break;

            case 6:
                mid_delete();
            break;

            case 9:
                display();
            break;

            default:
                printf("\n\t Please Enter A Valid Choice(1/3/5/6/9)");
            break;
        }
    }
    while(ch!=0);
}