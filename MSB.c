//C program to check Most Significant Bit (MSB) of a number is set or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer n:");
    scanf("%d", &n);
    int bits = sizeof(int)*8;
    int msb = 1 << (bits-1);
    
    if(n & msb)
        printf("The MSB of %d is set(1).", n);
    else
        printf("The MSB of %d is not set(o)", n);
    return 0;
    
}
