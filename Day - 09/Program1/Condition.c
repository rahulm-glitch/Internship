// Write a c program which uses the if else condition

#include<stdio.h>

int main(){
    int Age;
    printf("\n Enter you age:");
    scanf("%d",&Age);

    if (Age >= 18)    
    {
        printf("\n You can vote");
    }

    else if (Age >= 15) 
    {
        printf("\n You can have a Pan Card");
    }

    else
    {
        printf("\n You cannot vote");
    }

    return 0;

}