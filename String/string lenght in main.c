#include <stdio.h>
int main()
{
  char csrc[50] ={};
  int len =0;
  
  puts("\n Enter a string : ");
  gets (csrc);
  
  len = strlen(csrc);
  printf("\n lenght of given string,is = %d", len);
  
  return 0;
}