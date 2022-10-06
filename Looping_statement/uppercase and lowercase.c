#include<stdio.h>
int main()
{
  char s[0]={};
  printf("Enter a character: ");
  scanf("%s",s);
  char c = s[0];
  if(c>= 'a' && c <= 'z')
  printf("\n The character is a lower-case letter");
  else
  printf("\n The character is not a lower-case letter");
  return 0;
}