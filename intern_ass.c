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