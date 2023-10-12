#include <stdio.h>
#include <stdlib.h>

void star(void)//animyeon biwuodo doem
{
  int i;
  for(i=0; i<10; i++)
           printf("*");
}

int main(int argc, char *argv[])
{
  int i;
  
  
  star();
  star();
  star();
  
  system("PAUSE");	
  return 0;
}
