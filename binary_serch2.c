#include<stdio.h>
#define n 50
int a[n];
int arrayNum()
{
    int i,m=1;
    for(i=0; i<n; i++, m+=2)
    {
        a[i] = m;
        printf("%d ",a[i]);
        for(int j=0; j<2; j++)
        {
            printf("\t");
        }
    }
}
int binarySearch(int l, int h, int x)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==x)
            return mid+1;

        else if(a[mid]<x)
            l=mid+1;

        else
            h=mid-1;
    }
    return -1;
}
int main()
{
    arrayNum();
    int x;
    printf("\n\nEnter Searching Elements : ");
    scanf("%d",&x);

    int m = binarySearch(0,n-1,x);
    if(m == -1)
        printf("Element was not Found.....");

    else
        printf("Element was Found at %d Position",m);
}