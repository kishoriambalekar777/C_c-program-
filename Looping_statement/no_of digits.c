#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int no=0, dcnt=0, temp=0;
  up: 
  printf("\n Enter positive number \n:");
  scanf("%d",&no);
  
  temp=no;
  while(temp>0)
  {
    dcnt++;
    temp=temp/10;
  }
  printf("\n\n no of digits in given number");
  
  return 0;
}