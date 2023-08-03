//simple queue
#include<stdio.h>
#define n 5
int f=-1, r=-1;
int a[n], val, ch;
int display()
{
    for(int i=f; i<=r; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
}
int insert_End()
{
    if(r>=n-1)
    printf("Queue is full...\n");

    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }

    else
    {
        printf("Enter Insert Queue Number : ") ;
        scanf("%d",&val);
        r++;
        a[r]=val;
    }
} 
int delete()
{
    if(f<0)
    printf("Queue is Empty...\n");

    else if(f<0)
    {
        f=r=-1;
        a[r]=val;
    }

    else
    {
        f++;
    }
}
int main()
{
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
                insert_End();
            break;

            case 2:
                delete();
            break;

            case 3:
                printf("Queue Is : ");
                display();
            break;

            case 0:
            break;

            default:
            break;
        }    
    }
    while(ch!=0);
}    