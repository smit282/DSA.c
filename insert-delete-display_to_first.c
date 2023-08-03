#include<stdio.h>
#define n 5
int a[n], top=-1;
void display()
{
    int i;
    for(i=0; i<=top; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
}    
int insert()
{
    int val, i;
    if(top>=n-1)
        printf("array is full...\n");
    else if(top<0)
    {
        printf("Enter Insert Array Num : ") ;
        scanf("%d",&val);
        top++;
        a[top]=val;
    }
    else
    {
        printf("Enter Insert Array Num : ") ;
        scanf("%d",&val);
        top++;
        for(i=top; i>=0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
    }
}
int delete()
{
    int i;
    if(top<0)
    printf("Array is Empty...\n");
    else
    {
        for(i=0; i<top; i++)
        {
            a[i]=a[i+1];
        }
        top--;
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n1. insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("Enter Your Choice : ");
        scanf("\n\t%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
            break;

            case 2:
                delete();
            break;

            case 3:
                printf("Array Is : ");
                display();
            break;

            case 0:
            break;

            default:
                printf("Choice Valid Number...\n");
            break;
        }    
    }
    while(ch!=0);
}    