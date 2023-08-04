#include<stdio.h>
#define n 5
int F=-1, R=-1;
int A[n], Val, ch;
int display()
{
    for(int i=F; i<=R; i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n");
}
int insert()
{
    if(R>=n-1)
    printf("\nQueue is full Now.....\n");

    else if(R<0)
    {
        F=R=0;
        A[R]=Val;
    }

    else
    {
        printf("Enter Insert Queue Number : ");
        scanf("%d",&Val);
        for(int i=n-1; i>=0; i--)
        A[i]=A[i-1];
        A[0]=Val;
        R++;
    }
}
int Delete()
{
    if(R<0)
    {
        printf("\nQueue is Already Empty...\n");
    }

    else if(F==R)
    {
        F=R=-1;
    }

    else
    {
        R--;
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
                insert();
            break;

            case 2:
                Delete();
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