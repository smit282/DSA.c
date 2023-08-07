#include<stdio.h>
#define n 5
int a[n], f=-1, r=-1;
int Display()
{
    int i=f;
    if(f<0)
        printf("Queue is Empty...");

    else
    {
        do
        {
            printf("%d  ",a[i]);
            i=(i+1)%n;
        }
        while(i!=(r+1)%n);
    }
}
int InsertEnd()
{
    int val;
    if(r<0)
    {
        printf("Enter Value : ");
        scanf("%d",&val);
        f=r=0;
        a[r]=val;
    }
    
    else if((r+1)%n==f)
    {
        printf("\n\tNow Queue is Full...\n");
    }

    else
    {
        printf("Enter Value : ");
        scanf("%d",&val);
        r=(r+1)%n;
        //printf("\nPosition : %d",r);
        a[r]=val;
    }
}
int DeleteFirst()
{
    if(f<0)
        printf("\n\tQueue is Already Empty...\n");

    else if(f==r)
    {
        f=r=-1;
        printf("\n\tNow Queue is Empty...\n");
    }
    
    else
    {
        f=(f+1)%n;
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n\n\t(Note : Last Insert / First Delete)\n");
        printf("\n1 -> Insert End\t\t(Note : Insert Only Last Position)");
        printf("\n2 -> Delete First\t(Note : Delete Only First Position)");
        printf("\n\n9 -> Display");
        printf("\n0 -> Exit");
        printf("\n\nEnter Your Choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                InsertEnd();
            break;

            case 2:
                DeleteFirst();
            break;

            case 9:
                printf("\nQueue is : ");
                Display();
            break;

            case 0:
            break;

            default:
                printf("\n\tEnter Valid Choice..");
            break;
        }
    }
    while(ch!=0);
}