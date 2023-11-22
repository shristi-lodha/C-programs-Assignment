#include<stdio.h>

int main(){

int size;
printf("enter the size :");
scanf("%d",&size);
int arr[size];
printf("enter the elements of the array :");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}    

return 0;
}