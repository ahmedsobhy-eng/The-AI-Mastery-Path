#include <stdio.h>

/**
 * Program to calculate the sum of numbers from 1 to n.
 * Part of COM 103 - Programming Course.
 */
int main()
{
       int n, sum = 0;

       printf("Enter a positive integer: ");
       // Check if input is a valid integer
       if (scanf("%d", &n) != 1 || n < 1)
       {
              printf("Error: Please enter a positive integer.\n");
              return 1;
       }

       // Standard O(n) loop to calculate sum
       for (int i = 1; i <= n; i++)
       {
              sum += i;
       }

       printf("The Sum of numbers from 1 to %d is: %d\n", n, sum);

       return 0;
}