 #include <stdio.h>
#include<stdio.h>

 int main()
 {
   
   char ch;
  
  printf("\nsmall letters alphabets :\n");
  for(ch='a';ch<='z';ch++)
  {
     printf("%c \t",ch);
  }
  printf("\n");
  printf("\ncapital letters alphabets :\n");
  for(ch='A';ch<='Z';ch++) 
  {
     printf("%c \t",ch);
  }
  return 0;
}