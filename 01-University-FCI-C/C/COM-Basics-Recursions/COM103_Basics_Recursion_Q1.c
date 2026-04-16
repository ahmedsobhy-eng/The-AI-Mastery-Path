#include <stdio.h>
int sumnatural(int x)
{
       if (x == 1)
       {
              return 1;
       }
       else
       {
              return x + sumnatural(x - 1);
       }
}
int main()
{
       int n;
       printf("Enter your num :\n");
       scanf("%d", &n);
       if (n <= 0)
       {
              printf("invaild number \n");
       }
       else
       {
              printf("the sum of number is %d\n", sumnatural(n));
       }

       return 0;
}