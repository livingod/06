#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
    int result;
    result = a+b;
    return result;
    
    //or return (a+b);
}

int square(int n)
{
    int result;
    result = n*n;
    return result;
}

int get_max(int x, int y)
{
    if (x>y)
           return x;
    else
        return y; 
}

int main(int argc, char *argv[])
{
    
    int a,b;
    
    a = 3;
    b = 7;
    
    printf("sumTwo result is %i\n",sumTwo(a,b));
    printf("square result is %i\n",square(a));
    printf("get_max result is %i\n",get_max(a,b));
  
  system("PAUSE");	
  return 0;
}
