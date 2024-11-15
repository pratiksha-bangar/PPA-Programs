// Addition of Two Numbers

#include<stdio.h>

int main()
{
    int no1=0;
    int no2 =0;
    int add=0,sub=0,mul=0,div=0;

    printf("Enter First value:");
    scanf("%d",&no1);

    printf("\nEnter Second value:");
    scanf("%d",&no2);

    add = no1 + no2;
    sub = no1 - no2;
    mul = no1 * no2;
    div = no1 % no2;
    
    printf("\n-------------------------");

    printf("\nAddition is :%d",add);
    printf("\nSubstraction is :%d",sub);
    printf("\nMultiplication is :%d",mul);
    printf("\nDivision is :%d",div);
    

    return 0;
}