#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
    int i;
    
    int res = 1;
    for (i=1;i<=n;i++)
        res = res*i;
    return res;
}

int combination(int n, int r)
{
    int dev1, dev2, dev3;
    
    dev1 = factorial(n);
    dev2 = factorial(r);
    dev3 = factorial(n-r);
    
    return (dev1/dev2/dev3);
    
} 
////////////////////////////////////////////////////
     
int main(int argc, char *argv[])
{

   int n,r;
   
   printf("input two numbers: ");
   scanf("%d %d", &n, &r);
   
   printf("the answer is %d\n",combination(n,r));
   
   
  system("PAUSE");	
  return 0;
}


