#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = &(arr[1]);

    int *q = &(arr[3]);

    printf("\n%d" , arr);
    printf("\n%d" , &arr);
    printf("\n%d" , &arr[0]);
    printf("\n%d" , p);
    printf("\n%d" , q);
    printf("\n%d" ,*p);
    printf("\n%d" ,*q);

    return 0;
}