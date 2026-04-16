#include <stdio.h>

int main()
{
       int num, multi;
       printf("Enter a number: ");
       scanf("%d", &num);

       printf("Multiplication Table for %d:\n", num);
       for (int i = 0; i <= 10; i++)
       {
              multi = i * num;
              printf("%d x %d = %d\n", i, num, multi);
       }

       return 0;
}