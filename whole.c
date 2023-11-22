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
// int main(){
    
//     return 0;
// }
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
        //    if(j==0){
        //     decsum=decsum+(bin[i]*1);
        // }
        // else{
    decsum=decsum+(bin[i]*pow(2,j));
  //      }
    j++;
        }
        else{
     decsum=-1;
        break;
    }
    }
    printf("the decimal number of given binary is : %d",decsum);

    return 0;
}


// write a program to reverse a string
/*
#include<stdio.h>
int main(){
    int size,j=0;
    printf("enter the size of your string :");
    scanf("%d",&size);
    char s[size];

    printf("enter the string :");
    // int i=(sizeof(s)/sizeof(char));
    // printf("%d",i);

while(j!=(size+1)){
    scanf("%c",&s[j]);
    j++;
    }
   // printf("%d",j);
    //int r=j-1;
    for(int r=j-1;r>=0;r--){
      printf("%c",s[r]);
    }
    return 0;
}
*/

// wap a program to reverse a string in that manner that if user give input ->
// how are you
// it will display as output
// you are how

// #include <stdio.h>
// int main()
// {
//     int size, j = 0, i, r;
//     printf("enter the size of your string :");
//     scanf("%d", &size);
//     char s[size];
//     printf("enter the string :");

//     while (j != size+1)
//     {
//         scanf("%c", &s[j]);
//         j++;
//     }
//     s[j]=' ';

//     for (r = j-1; r >= 0; r--)
//     {
//         if (s[r] == ' ')
//         {
//             i = r + 1;
//             while (s[i] != ' ')
//             {
//                 printf("%c", s[i]);
//                 i++;
//             }
//             printf(" ");
//         }
//     }
//     i = r +1;
//     printf("%d",i);
//     while (s[i+1] != ' ')
//     {
//         printf("%c", s[i]);
//         i++;
//     }
//     return 0;
// }


// Write a C program to compare two strings without using the strcmp() function.
/*
#include <stdio.h>
int main()
{
    int size1,flag,size2;
    printf("enter the size of first string :");
    scanf("%d", &size1);
    char str1[size1];
    printf("enter the first string :");
    for (int i = 0; i <= size1 - 1; i++)
    {
        scanf("%c", &str1[i]);
    }

    printf("enter the size of second string :");
    scanf("%d",&size2);
    char str2[size2];

    printf("enter the second string :");
    for (int j = 0; j <= size2 - 1; j++)
    {
        scanf("%c",&str2[j]);
    }
    if (size1 == size2)
    {
        for (int k = 0; k <= size1 - 1; k++)
        {
            flag = 0;
            if (str1[k] == str2[k])
            {
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("both strings are matched");
        }
        else
        {
            printf("both strings are not matched");
        }
    }
    else
    {
        printf("both strings are  not matched");
    }
    return 0;
}
*/

// Write a C program to remove all occurrences of a given character from a string.
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    char ch;
    
    printf("enter the size of your string :");
    scanf("%d",&size);
    char arr[size];
    // int indeX;
    
    printf("enter your string :");
    // int ss=strlen(arr);
    // printf("%d",ss);
    for (int i = 0; i <=size-1; i++)
    {
        //printf("hello");
       // printf("%d",i);
        scanf("%c",&arr[i]);
    }
    printf("%c\n",arr[1]);
    printf("enter the character from your string that want to delete :\n");
    scanf("%c",&ch);
    //printf("\n %c\n",ch);
    int len =strlen(arr);
    printf("%d",len);
    for(int i=0;i<size;i++){
        if(arr[i]==ch){
            arr[i]=arr[i+1];
           size =size-1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%s", arr);
    }
   return 0;
}*/