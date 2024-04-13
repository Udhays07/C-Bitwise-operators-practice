//Write a C program to get nth bit of a number.
#include<stdio.h>
int main()
{
    int n, x;
    printf("Enter an integer x: ");
    scanf("%d", &x);
    printf("Enter the nth bit (0-31) to check its status: ");
    scanf("%d", &n);
    int status = x >> 1;
    if(status)
        printf("The given nth bit is set(1)");
    else
        printf("The given nth bit is not set(0)");
    return 0;
}
