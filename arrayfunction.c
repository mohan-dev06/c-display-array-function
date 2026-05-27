#include<stdio.h>
void display(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int a[5]={8,22,27,32,42};
    display(a, 5);
}    