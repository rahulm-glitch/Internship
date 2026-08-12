// In this we have use Terenatary Operator to check whether the number is even or odd and then multiply it by 2 if it is even or multiply it by 1 if it is odd.

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter a number:");
    scanf("%d",&num);
    
    result = num % 2 == 0 ? num * 2 : num * 1;
    
    printf("The result is: %d",result);
    return 0;

}