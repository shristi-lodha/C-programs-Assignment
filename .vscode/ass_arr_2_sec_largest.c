//Write a program to find the second largest element in an integer array.

#include<stdio.h>
int main(){
    int size;
    
    int largest=0;
    int sec_largest=0;
    printf("enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            sec_largest=largest;
            largest =arr[i];
        }else{
            if(sec_largest<arr[i]&& largest !=arr[i]){
                sec_largest=arr[i];
            }
        }
    }
    printf("the second largest element is :%d ",sec_largest);
   
    return 0;
}