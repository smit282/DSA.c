#include<stdio.h>
#include<stdlib.h>
#define n 50
int a[n], i , val, s=0;
int linary_serching(int a[],int v)
{
    for(i=0; i<n; i++)
    {
        if(v == a[i])
        break;
    }
    if(i<n)
        printf("--> Index Number : %d",i);
    else
        printf("--> *Element Not Found..");
}
int main()
{
    for(i=0; i<n; i++)
    {
        a[i]=rand()%100; 
        printf("%d : <%d> \n",i,a[i]);
    }
    printf("\n--> Searching value : ");
    scanf("%d",&val);
    linary_serching(a,val);
}