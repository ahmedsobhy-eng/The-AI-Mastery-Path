#include <stdio.h>

#define max 10

// Function prototype: returns a pointer to an integer
int *maxmin(int ar[], int v);

int main()
{
       int arr[max];
       int n, i, *p;

       printf("The number of values you want to input (not more than %d): ", max);
       scanf("%d", &n);

       printf("Input the %d values:\n", n);
       for (i = 0; i < n; i++)
       {
              scanf("%d", &arr[i]);
       }

       // p receives the address of the result_mm array
       p = maxmin(arr, n);

       printf("The minimum value is: %d\n", *p);   // Value at the first position
       printf("The maximum value is: %d\n", *++p); // Value at the next position (incremented)

       return 0;
}

int *maxmin(int arra1[], int v)
{
       int i;
       // static ensures the array persists after the function returns
       static int result_mm[2];

       result_mm[0] = arra1[0]; // To store minimum
       result_mm[1] = arra1[0]; // To store maximum

       for (i = 1; i < v; i++)
       {
              if (result_mm[0] > arra1[i])
                     result_mm[0] = arra1[i];
              if (result_mm[1] < arra1[i])
                     result_mm[1] = arra1[i];
       }

       return result_mm; // Returning the address
}