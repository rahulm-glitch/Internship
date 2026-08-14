// This program demonstrates the use of the ternary operator in C to find the smallest of two numbers.

#include<stdio.h>
 
    int main(){
      int  a = 60, b = 50, c;
      c = a < b ? a : b;
      printf("The smallest number is %d",c); 

    }