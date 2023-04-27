//Write a program to implement a simple calculator.
#include<stdio.h>

void addition(int a,int b){
    printf("the sum of two number is : %d",a+b);

}

void subtraction(int a,int b){
    printf("the subtract of two number is : %d",a-b);

}

void multiplication(int a,int b){
    printf("the multiplication of two number is : %d",a*b);

}

void division(int a,int b){
    printf("the division of two number is : %d",a/b);

}

void modulo(int a,int b){
    printf("the remainder of given numbers is : %d",(a%b));

}
int main(){
    printf("the number for the operation is :\n 1 : addition \n 2 : subtraction \n 3 : multiplication \n 4 : division "
           " \n 5 : remainder\n");
    int num,a,b;
    printf("enter the operands :");
    scanf("%d %d",&a,&b);
    printf("enter the number :");
    scanf("%d",&num);
    switch(num){
        case 1:
              addition(a,b);
              break;
        case 2:
              subtraction(a,b);
              break;
        case 3:
              multiplication(a,b);
              break;
        case 4:
              division(a,b);
              break;
        case 5:
              modulo(a,b);
              break;
        default :
          printf("enter the correct number from given options !!!");      
    }

    return 0;
}