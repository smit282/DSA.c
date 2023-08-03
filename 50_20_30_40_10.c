#include<stdio.h>
int main()
{
    int a[50], t, S ,s;
    printf("enter array size : ");
    scanf("%d",&S);
    for(t=0; t<S; t++)
    {
        printf("enter number %d : ",t);
        scanf("%d",&a[t]);
    }

    printf("\noutput : ");
    s = a[0];
    for(t=0; t<S; t++)
    {
        a[t] = a[t+1];
    }

    a[S-1] = s;
    for(t=0; t<S; t++)
    {
        printf("%d\t",a[t]);
    }
}