//Write a program to find the factorial of a number.
// using iterative approach -
#include<stdio.h>
int main(){
    int num,pro=1;
    printf("enter the number :");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
       pro =pro *i; 
    }    
    printf("the factorial of the %d is :%d",num,pro);
    
    return 0;
}
