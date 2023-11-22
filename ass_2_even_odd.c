//Write a program to take a number as input from the user and print whether it is even or odd.
#include<stdio.h>
int main(){
    int number;
    printf("enter the number that you want to check whether it is odd or even :");
    scanf("%d",&number);
    if(number %2 ==0){
        printf("%d is an even number ",number);
    }else{
        printf("%d is an odd number",number);
    }
    return 0;
}