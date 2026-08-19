// Write a c program which uses Switch Case

#include<stdio.h>

int main(){
int age;
int n;

printf("\n Enter Your Age:");
scanf("%d",&age);

if (age >= 18)
{
    n = 1;
}
else if (age >= 15)
{
    n = 2;
}
else
{
    n = 0;
}

switch(n)
{
    case 1 : printf("\n You can vote");
        break;

    case 2 : printf("\n You can apply for a Pan Card");
        break;
    default : printf("\n Enjoy Life");

}

return 0;

}