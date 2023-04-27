//finding using recursion function

#include<stdio.h>

int naturalsum(int num){
    if(num<1){
        return 0;
    }
    else{
        return num+naturalsum(num-1);
    }
}

int main(){
      int n;
printf("enter the number :");
scanf("%d",&n);
int sum=naturalsum(n);
printf("the sum of first %d natural number is :%d",n,sum);
    return 0;
}
