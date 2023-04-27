// Write a C program to find the first non-repeating character in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    char str[size];
   
    int flag = 0;
    printf("enter the string :");
    gets(str);
    size =strlen(str);
    
    for (int i = 0; i < size; i++)
    {
       
        flag =1;
        for (int j = i+1; j < size; j++)
        {
            if (str[i] == str[j])
            {
                flag = 0;
            }
            
        }
    
        if (flag == 1)
        {  
            
            printf("the first non repeating character in given string is :%c ", str[i]);
            break;
        }
    }

    return 0;
}