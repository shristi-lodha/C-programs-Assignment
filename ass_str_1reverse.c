// write a program to reverse a string

#include <stdio.h>
int main()
{
  int size, j = 0;
  printf("enter the size of your string :");
  scanf("%d", &size);
  char s[size];

  printf("enter the string :");
  while (j != (size + 1))
  {
    scanf("%c", &s[j]);
    j++;
  }
  printf("After reversing the string is : ");
  for (int r = j - 1; r >= 0; r--)
  {
    printf("%c", s[r]);
  }
  return 0;
}
