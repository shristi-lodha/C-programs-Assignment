//calculating the sum of first n natural number 
//finding using iterative approach
/*
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
*/
//finding using formula -
/*
#include<stdio.h>
int main(){
    int n;
printf("enter the number :");
scanf("%d",&n);
int sum =(n*(n+1))/2;
printf("the sum of first %d natural number is :%d",n,sum);
return 0;
}
*/

//finding using recursion function
/*
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
*/
//iterative approach -
/*
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
*/
//recursive approach -
/*
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
*/

//by formula
#include<stdio.h>
int main(){
    
    return 0;
}
//finding factorial of a number  using recursion function
/*
#include<stdio.h>
int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
int num;
printf("enter the number :");
scanf("%d",&num);
int facsum = factorial(num);
printf("the factorial of given %d is :%d",num,facsum);
    return 0;
}
*/
//finding factorial of a number using iterative approach 
/*
#include<stdio.h>

int main(){
     int num,pro=1;
     printf("enter the number :");
     scanf("%d",&num);
     for(int i=num;i>0;i--){
        pro=pro*i;
     }
     printf("the factorial of given %d is :%d",num,pro);
    return 0;
}
*/
// decimal to binary conversion program in c
/*
#include<stdio.h>
int main(){
    int dec;
   int arr[100];
   int i=0;
    printf("enter the decimal number :");
    scanf("%d",&dec);
while(dec!=1){

        arr[i]=dec%2;
        dec=dec/2;
        i++;
}
int j=i-1;
printf("1 ");
for(int k=j;k>=0;k--){
    printf("%d ",arr[k]);
}

    return 0;
}

*/
// binary to decimal conversion program in c

#include<stdio.h>
#include<math.h>
int main(){
    int bin[100];
    int decsum=0,bits,j=0;
    printf("enter the no. of bits you want to enter in binary number :");
    scanf("%d",&bits);
    printf("enter the binary number :");
    for(int i=0;i<bits;i++){
    scanf("%d",&bin[i]);
    }
    for(int i=bits-1;i>=0;i--){
        if(bin[i]==1||bin[i]==0){
        //   …