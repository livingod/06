#include <stdio.h>
#include <stdlib.h>

void func1(void)
{
     int x;
     
     printf("func1 x is at %p\n", &x);
     //%p << 16jinsu, &x = juso?? mola
}

int main(int argc, char *argv[])
{
  int x;
  
  printf("main x is at %p\n",&x);
  func1();
  
  
  system("PAUSE");	
  return 0;
}
