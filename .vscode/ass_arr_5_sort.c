//Write a program to sort an array in ascending order.
#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int temp;
            if(arr[i]>arr[j]){
                 temp =arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
            }
        }
    }
    printf("After arranging the elements in ascending order the array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}