// binary to decimal conversion program in c
#include<stdio.h>
#include<math.h>
int main(){
    int bin[100];
    int result;
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
            result = pow(2,j);
    decsum=decsum+(bin[i]*result);
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