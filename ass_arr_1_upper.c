//Write a C program to convert a given string to uppercase.

#include<stdio.h>
#include<string.h>

int main(){
     int size;
     char str[size];
     
     printf("enter the string :");
     gets(str);
     size=strlen(str);
     for(int i=0;i<size;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
     } 
     puts(str);
    return 0;
}