//by formula
#include<stdio.h>
int fib(int n){
    int sum;
    if(n>0){
    if(n==1){                                                                                 
        return 0;
}
    else{
        return fib(n-1)+fib(n-2);

    }
    }
    return;
    sum = fib(n-1)+fib(n-2);
}
int main(){
    int num,a,b;
    printf("enter the number :");
    scanf("%d",&num);
      a=0;
      b=1;

    return 0;
}