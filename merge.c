#include<stdio.h>
int main()
{
    int a1[10], a2[10], A[50], S1, S2, t, s;
    printf("Size Of Array 1 : ");
    scanf("%d",&S1);
    for(t=0; t<S1; t++)
    {
        printf("Elements of Array 1--> %d : ",t);
        scanf("%d",&a1[t]);
        A[t] = a1[t];
    }

    s = t;
    printf("\nSize Of Array 2 : ");
    scanf("%d",&S2);
    for(t=0; t<S2; t++)
    {
        printf("Elements of Array 2--> %d : ",t);
        scanf("%d",&a2[t]);
        A[s++]=a2[t];
    }
    
    printf("\nAfter merge : ");
    for(t=0; t<s; t++)
    printf("%d ",A[t]);
}