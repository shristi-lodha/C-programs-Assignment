//finding using iterative approach

#include<stdio.h>

int main(){
int n;
int sum =0;
printf("enter the number :");
scanf("%d",&n);
for(int i=n;i>0;i--){
    sum=sum+i;
}
printf("the sum of first %d natural number is :%d",n,sum);
    return 0;
}
