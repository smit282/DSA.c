#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n];
int bubble_sort()
{
    int i,j,t;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j] >a [j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main()
{
    int i;
    for(i=0; i<n; i++)
    a[i] = rand() % 48+1;
    printf("random array is : ");
    for(int i=0; i<n; i++)
    printf("%d  ",a[i]);

    bubble_sort();
    printf("\n\nsorted array is : ");
    for(int i=0; i<n; i++)
    printf("%d  ",a[i]);
}