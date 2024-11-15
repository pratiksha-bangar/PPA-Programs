#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    // or we can write
    // int arr[] = {10,20,30,40};

    printf("\n%d",arr[0]);
    printf("\n%d",arr[3]);
    printf("\n%d",arr[4]);

    printf("\n%d",sizeof(arr));


    return 0;
}