
#include <stdio.h>
int main()   {
     int a[2][2]={{1, 2}, {2, 3}};
     int b[2][2]={{2, 7}, {3, 8}};
     int c[2][2];
      printf("Matrix A is\n");
        for(int i=0;i<2;i++)  {
            for(int j=0;j<2;j++)  {
                 printf("%d ",a[i][j]);
              }
            printf("\n");
       }

     printf("Matrix B is\n");
        for(int i=0;i<2;i++)  {

            for(int j=0;j<2;j++)  {

                printf("%d ",b[i][j]);
              }
            printf("\n");
       }

     printf("Matrix A addition Matrix B is Matrix C\n");
        for(int i=0;i<2;i++)  {

            for(int j=0;j<2;j++)  {

                c[i][j] = a[i][j] + b[i][j];
                printf("%d ",c[i][j]);
              }
            printf("\n");
       }
 
 return 0;
}
