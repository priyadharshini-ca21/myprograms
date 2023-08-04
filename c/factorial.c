#include <stdio.h>

    int factorial(int n)  {

          int f;
          if(n<=1)  {
              return 1;
          }
          else  {
              return n*factorial(n-1);
          }
}
    int main()   {
          int n,f;
          printf("Enter The Factorial Values  ");
          scanf("%d",&n);
          f=factorial(n);
          printf("The factorial value is %d and the answer is %d\n",n,f);
          return 0;
}
