//Write a program to take two numbers as input from the user and print their sum.
#include<stdio.h>

int main(){
   int num1,num2,sum;
   printf("enter the first number :");
   scanf("%d",&num1);
   printf("enter the second number :");
   scanf("%d",&num2);
   sum =num1+num2;
   printf("the sum of %d and %d is :%d",num1,num2,sum);
    return 0;
}