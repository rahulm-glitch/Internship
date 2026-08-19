\\ Write a C program to print numbers from 1 to n using while loop.

#include<stdio.h>

int main(){
    int i,n;
    
    printf("\n Enter a number:-");
    scanf("%d",&n);

    i = 1;
    while (i<=n)
    {
        printf("\n Number %d",i);
        i++;
    }
    return 0;
}