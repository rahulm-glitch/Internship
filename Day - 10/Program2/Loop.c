// Write a program to take input from user until the user enters 5. If the user enters 5, exit the loop otherwise continue the loop. 

#include<stdio.h>

int main(){
    int i;

    while (1){
    printf("\n Enter a number:-");
    scanf("%d",&i);

    if (i == 5)
    {
        printf("\n Aap Mumbai aa sakte ho");
        break;
    }
    else
    {
        printf("\n Sorry aap Mumbai nahi aa sakte");
    }
    }    
    return 0;
} 