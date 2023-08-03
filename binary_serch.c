#include<stdio.h>
#define n 10
int binary_serch(int a[], int l, int h, int x)
{
    int mid;
    while(l <= h)
    {
        mid=(l+h)/2;
        if(a[mid] == x)
        return mid+l;
        else if(a[mid]<x)
        l=mid+l;
        else
        h=mid-1;
    }
    return-1;
}
int main()
{
    int a[n]={1,5,14,19,26,32,46,51,55,61}, x;
    printf("enter your serching element : ");
    scanf("%d",&x);
    int m=binary_serch(a, 0, n-1, x);
    if(m == -1)
    printf("element is not found...");
    else
    printf("element found at <%d> position",m);
}