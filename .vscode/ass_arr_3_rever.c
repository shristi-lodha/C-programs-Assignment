//Write a program to reverse the elements of an array.

#include<stdio.h>
int main(){
    int size;
   printf("enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("after reversing the elements of the array is :");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}