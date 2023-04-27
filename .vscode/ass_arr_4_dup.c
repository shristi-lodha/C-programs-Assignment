//Write a program to remove duplicate elements from an array.

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
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size;k++){
                    arr[k]=arr[k+1];
                }
                size=size-1;
                j=j-1;
            }
        }
    }
    printf("after removing the duplicates elements the array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}