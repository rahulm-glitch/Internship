// This program demonstrates the use of the ternary operator in C to find the largest of two numbers.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    c = a > b ? a : b;
    printf("The Largest number is %d",c);
    return 0;
}