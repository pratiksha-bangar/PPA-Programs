#include<stdio.h>

int main()
{
    int arr[4] = {11,22,33,44};

    printf("\n%d",arr[0]);
    printf("\n%d",arr[1]);
    printf("\n%d",arr[2]);
    printf("\n%d",arr[3]);

    printf("\n%d", sizeof(arr));
    printf("\n%d", sizeof(arr[0]));
    printf("\n%d", sizeof(arr[1]));

    printf("\n%d",arr);          // base address of first element
    printf("\n%d",&arr);         // base address of whole array
    printf("\n%d",&arr[0]);
    printf("\n%d",&arr[1]);

    return 0;

}