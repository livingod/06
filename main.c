#include <stdio.h>
#include <stdlib.h>

void square1(int a)
{
     a = a*a;
}

int square2(int a)
{
    return(a*a);
}
         
int main(int argc, char *argv[])
{
    int a = 2;
    square1(a);
    printf("a=%i\n",a);
    
    int b = 2;
    b = square2(b);
    printf("b=%i\n",b);
    
  system("PAUSE");	
  return 0;
}


//jal moreugesseoyo YoY
