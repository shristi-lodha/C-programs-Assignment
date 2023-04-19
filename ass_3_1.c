//Write a program to find the factorial of a number.
//using recursive approach -

#include<stdio.h>
int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n *(factorial(n-1));
    }
}
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int fac = factorial(num);
    printf("the factorial of the %d is :%d",num,fac);
    return 0;
}