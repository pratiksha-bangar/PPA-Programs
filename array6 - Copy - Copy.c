#include <stdio.h>
int main()
{
    int arr[3][4] = {10,20,30,40,50,60,70,80,90,100,110,120};

    printf("\n%d",sizeof(arr));     //48

    printf("\n%d", arr[1][0]);     //50
    printf("\n%d", arr[2][1]);     //100
    printf("\n%d", arr[1][1]);     // 60
    
    return 0;
}
