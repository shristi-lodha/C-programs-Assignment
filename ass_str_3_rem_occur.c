//Write a C program to remove all occurrences of a given character from a string.
#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    char str[size];
    char ch;

    printf("enter the string :");
    gets(str);
    printf("enter the character from your string that you want to remove that character occurence :");
    scanf("%c", &ch);
    size = strlen(str);
    
    for (int i = 0; i < size; i++)
    {

        if (str[i] == ch)
        {

            for (int j = i; j < size; j++)
            {
                str[j] = str[j + 1];
            }
            size = size - 1;
            i=i-1;
        }
    }
    puts(str);
    return 0;
}