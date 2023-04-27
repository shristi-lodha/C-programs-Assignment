
// Write a C program to compare two strings without using the strcmp() function.

#include <stdio.h>
int main()
{
    int size1,flag,size2;
    printf("enter the size of first string :");
    scanf("%d", &size1);
    char str1[size1];
    printf("enter the first string :");
    for (int i = 0; i <= size1; i++)
    {
        scanf("%c", &str1[i]);
    }

    printf("enter the size of second string :");
    scanf("%d",&size2);
    char str2[size2];

    printf("enter the second string :");
    for (int j = 0; j <= size2; j++)
    {
        scanf("%c",&str2[j]);
    }
    if (size1 == size2)
    {
        for (int k = 0; k <= size1; k++)
        {
            flag = 0;
            if (str1[k] == str2[k])
            {
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("both strings are matched");
        }
        else
        {
            printf("both strings are not matched");
        }
    }
    else
    {
        printf("both strings are  not matched");
    }
    return 0;
}
