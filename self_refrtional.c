#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node*ptr;
};
int main()
{
    struct node x,y,z;
    x.ch='A';
    x.data=65;

    y.ch='B';
    y.data=70;

    z.ch='C';
    z.data=75;

    x.ptr=&y;
    y.ptr=&x;
    z.ptr=&z;

    printf("X:\ndata:%d\tch:%c",y.ptr->data,y.ptr->ch);
    printf("\n\nY:\ndata:%d\tch:%c",x.ptr->data,x.ptr->ch);
    printf("\n\nZ:\ndata:%d\tch:%c",z.ptr->data,z.ptr->ch);
} 