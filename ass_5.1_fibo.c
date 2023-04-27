//iterative approach -

#include<stdio.h>

int main(){

int num,sum,a,b;
 a=0;
 b=1;
printf("enter the number :");
scanf("%d",&num);
printf("the fibonacci series till %d number is :",num);
printf("%d %d ",a,b);
num=num -2;
 while(num!=0){
    sum =a+b;
    printf("%d ",sum);
    a=b;
    b=sum;
    num--;
 }
 return 0;
}
