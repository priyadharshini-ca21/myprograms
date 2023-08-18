#include <stdio.h>

int main() {
    int n,f=1;
    printf("Enter The Value:");
    scanf("%d",&n);
      for(int i=1;i<=n;i++) {
         f=f*i;
         }
      printf("The factorial number is %d and the value is %d\n",n,f);
      return 0;
}
