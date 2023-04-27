//recursive approach -

#include<stdio.h>
void fibo(int n,int a,int b){
   int sum;
   if(n!=0){
      sum =a+b;
      printf("%d ",sum);
      n=n-1;
      fibo(n,b,sum);
      
   }
}
int main(){

int num,sum;
 int a,b;
    a=0;
    b=1;
printf("enter the number :");
scanf("%d",&num);
printf("the fibonacci series till %d number is :",num);
printf("%d %d ",a,b);
num=num -2;
fibo(num,a,b);
    return 0;
}

