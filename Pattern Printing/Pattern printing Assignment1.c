#include <stdio.h>
int main()
{
  char i,j,count='A';
  for(i='A';i<='E';i++)
  {
    for(j='A';j<=i;j++)
    {
      printf("%c",count);
      count++;
    }
    printf("\n");
  }
}