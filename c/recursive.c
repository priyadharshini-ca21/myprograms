#include <stdio.h>

int fact(int n) {
    if(n<=1) {
      return 1;
      }
    else {
      return n*fact(n-1);
      }
}

int main() {
    int n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial num %d and their factorial value %d\n",n,f);
    return 0;
}
