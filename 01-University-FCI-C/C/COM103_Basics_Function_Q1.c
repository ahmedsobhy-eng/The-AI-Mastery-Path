#include <stdio.h>
int iseven(int num)
{
       return num % 2 == 0;
}
int main()
{
       int num;
       printf("enter your num \n");
       scanf("%d", &num);
       if (iseven(num))
       {
              printf("%d is even\n", num);
       }
       else
       {
              printf("%d is odd\n", num);
       }

       return 0;
}