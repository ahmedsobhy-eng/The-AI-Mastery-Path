//All c coding university
//sheet 1//
#include <stdio.h>

int main()
{
       int choice;
       float n1, n2;
       do
       {
              printf("\n1. Add\n2. Subtract\n3. Exit\nChoose: ");
              scanf("%d", &choice);
              if (choice == 3)
                     break; // Exit option

              printf("Enter two numbers: ");
              scanf("%f %f", &n1, &n2);

              if (choice == 1)
                     printf("Result: %.2f\n", n1 + n2);
              else if (choice == 2)
                     printf("Result: %.2f\n", n1 - n2);
       } while (choice != 3);
       return 0;
}

// Example: Function to check if number is even
int isEven(int num)
{
       return (num % 2 == 0); // returns 1 (true) or 0 (false)
}

int main()
{
       int n = 10;
       if (isEven(n))
              printf("Even"); // Main handles printing
       return 0;
}
#include <stdio.h>

int calculateDiff(int max, int min)
{
       return max - min; // Function to calculate difference [cite: 15]
}

int main()
{
       int nums[10], min, max;
       printf("Enter 10 integers:\n");
       for (int i = 0; i < 10; i++)
       {
              scanf("%d", &nums[i]);
              if (i == 0)
                     min = max = nums[i];
              if (nums[i] > max)
                     max = nums[i]; // Find greatest [cite: 14]
              if (nums[i] < min)
                     min = nums[i]; // Find smallest [cite: 14]
       }
       printf("Difference is: %d\n", calculateDiff(max, min)); // Call function [cite: 15]
       return 0;
}
//int sum(int n)
//{
       //if (n <= 0)
      //        return 0;
     //  return n + sum(n - 1); // Recursive call
//}

int isPrime(int n, int i)
{
       if (n <= 2)
              return (n == 2);
       if (n % i == 0)
              return 0;
       if (i * i > n)
              return 1;
       return isPrime(n, i + 1); // Recursive step
}

void reverse(char *str)
{
       if (*str)
       {
              reverse(str + 1);   // Go to the end first
              printf("%c", *str); // Print while returning
       }
}



//SHEET 2 ARRAY//
#include <stdio.h>

int main()
{
       float arr[10], sum = 0, max, min;
       printf("Enter 10 numbers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%f", &arr[i]);
              if (i == 0)
                     max = min = arr[i];
              if (arr[i] > max)
                     max = arr[i];
              if (arr[i] < min)
                     min = arr[i];
              sum += arr[i];
       }
       printf("Max: %.2f, Min: %.2f, Avg: %.2f\n", max, min, sum / 10);
       return 0;
}



int isAscending(int arr[], int n)
{
       for (int i = 0; i < n - 1; i++)
       {
              if (arr[i] > arr[i + 1])
                     return 0; // Not ascending
       }
       return 1; // Ascending
}

#include <stdio.h>

int main()
{
       int n, evenSum = 0, oddSum = 0;
       for (int i = 0; i < 10; i++)
       {
              scanf("%d", &n);
              if (n % 2 == 0)
                     evenSum += n;
              else
                     oddSum += n;
       }
       printf("Even Sum: %d, Odd Sum: %d\n", evenSum, oddSum);
       return 0;
}

#include <stdio.h>

int main()
{
       int a[10], inc = 0, dec = 0;
       for (int i = 0; i < 10; i++)
              scanf("%d", &a[i]);
       for (int i = 0; i < 9; i++)
       {
              if (a[i] < a[i + 1])
                     inc = 1;
              if (a[i] > a[i + 1])
                     dec = 1;
       }
       if (inc && !dec)
              printf("increasing\n");
       else if (!inc && dec)
              printf("decreasing\n");
       else if (!inc && !dec)
              printf("not changing\n");
       else
              printf("increasing and then decreasing\n"); // Simplified logic
       return 0;
}

#include <stdio.h>

int main()
{
       int mat[3][4], target, found = 0;
       for (int i = 0; i < 3; i++)
              for (int j = 0; j < 4; j++)
                     scanf("%d", &mat[i][j]);

       printf("Enter number to search: ");
       scanf("%d", &target);
       for (int i = 0; i < 3; i++)
       {
              for (int j = 0; j < 4; j++)
              {
                     if (mat[i][j] == target)
                     {
                            printf("Position: Row %d, Col %d\n", i, j);
                            found = 1;
                     }
              }
       }
       if (!found)
              printf("number not found\n");
       return 0;
}

#include <stdio.h>

int main()
{
       int mat[3][3], maxSum = -1e9, rowIdx = 0;
       for (int i = 0; i < 3; i++)
       {
              int currentSum = 0;
              for (int j = 0; j < 3; j++)
              {
                     scanf("%d", &mat[i][j]);
                     currentSum += mat[i][j];
              }
              if (currentSum > maxSum)
              {
                     maxSum = currentSum;
                     rowIdx = i;
              }
       }
       printf("Row with max sum is: %d\n", rowIdx);
       return 0;
}

#include <stdio.h>

int main()
{
       int n = 5;
       for (int i = 0; i < n; i++)
       {
              for (int j = 0; j < n; j++)
              {
                     if (i == j)
                            printf("0 ");
                     else if (i < j)
                            printf("1 ");
                     else
                            printf("-1 ");
              }
              printf("\n");
       }
       return 0;
}

#include <stdio.h>

int main()
{
       int n = 5, pas[10][10];
       for (int i = 0; i < n; i++)
       {
              for (int j = 0; j <= i; j++)
              {
                     if (j == 0 || j == i)
                            pas[i][j] = 1;
                     else
                            pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
                     printf("%d ", pas[i][j]);
              }
              printf("\n");
       }
       return 0;
}

void reverseArray(int src[], int dest[], int n)
{
       for (int i = 0; i < n; i++)
       {
              dest[n - 1 - i] = src[i];
       }
}

void studentAvg()
{
       int students;
       float grade, sum;
       printf("Number of students: ");
       scanf("%d", &students);
       for (int i = 0; i < students; i++)
       {
              sum = 0;
              printf("Grades for student %d: ", i + 1);
              for (int j = 0; j < 5; j++)
              {
                     scanf("%f", &grade);
                     sum += grade;
              }
              printf("Average: %.2f\n", sum / 5);
       }
}

void studentAvg()
{
       int students;
       float grade, sum;
       printf("Number of students: ");
       scanf("%d", &students);
       for (int i = 0; i < students; i++)
       {
              sum = 0;
              printf("Grades for student %d: ", i + 1);
              for (int j = 0; j < 5; j++)
              {
                     scanf("%f", &grade);
                     sum += grade;
              }
              printf("Average: %.2f\n", sum / 5);
       }
}

int isSparse(int mat[3][3], int r, int c)
{
       int zeros = 0;
       for (int i = 0; i < r; i++)
              for (int j = 0; j < c; j++)
                     if (mat[i][j] == 0)
                            zeros++;
       return (zeros > (r * c) / 2);
}

int isSymmetric(int mat[3][3], int n)
{
       for (int i = 0; i < n; i++)
              for (int j = 0; j < n; j++)
                     if (mat[i][j] != mat[j][i])
                            return 0;
       return 1;
}

#include <stdio.h>
const float PI = 3.14159;

void calcCircle(float r, float *a, float *c)
{
       *a = PI * r * r;
       *c = 2 * PI * r;
}

int main()
{
       float radius, area, circ;
       scanf("%f", &radius);
       calcCircle(radius, &area, &circ);
       printf("Area: %.2f, Circumference: %.2f\n", area, circ);
       return 0;
}

void getStats(int a[], int n, int *max, int *min, float *avg)
{
       int sum = 0;
       *max = *min = a[0];
       for (int i = 0; i < n; i++)
       {
              if (a[i] > *max)
                     *max = a[i];
              if (a[i] < *min)
                     *min = a[i];
              sum += a[i];
       }
       *avg = (float)sum / n;
}
//SHEET3 STRUCT//

void my_strcat(char S1[], char S2[])
{
       int i = 0, j = 0;
       while (S1[i] != '\0')
              i++; // الوصول لنهاية النص الأول
       while (S2[j] != '\0')
       {
              S1[i] = S2[j]; // إضافة حروف النص الثاني
              i++;
              j++;
       }
       S1[i] = '\0'; // إغلاق النص المدمج
}

#include <stdio.h>
int main()
{
       char chars[10];
       int found = -1;
       printf("Enter 10 characters: ");
       for (int i = 0; i < 10; i++)
       {
              scanf(" %c", &chars[i]); // المسافة قبل %c لتجنب مشاكل الـ Enter
              if (chars[i] == 'z' && found == -1)
                     found = i;
       }
       if (found != -1)
              printf("Character 'z' found at position: %d\n", found);
       else
              printf("Character 'z' not found.\n");
       return 0;
}

int countOccurrences(char str[], char ch)
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ch)
                     count++;
       }
       return count;
}

int countOccurrences(char str[], char ch)
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ch)
                     count++;
       }
       return count;
}

void reverseRecursive(char str[])
{
       if (*str == '\0')
              return;             // Base Case
       reverseRecursive(str + 1); // Recursive Step
       printf("%c", *str);        // الطباعة أثناء العودة من الـ Stack
}

int replace(char str[])
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ' ')
              {
                     str[i] = '-';
                     count++;
              }
       }
       return count;
}

int replace(char str[])
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ' ')
              {
                     str[i] = '-';
                     count++;
              }
       }
       return count;
}

#include <stdio.h>

int main()
{
       float arr[10], sum = 0, max, min;
       float *ptr = arr; // تعيين المؤشر لبداية المصفوفة

       printf("Enter 10 numbers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%f", (ptr + i)); // إدخال باستخدام Offset
              sum += *(ptr + i);

              if (i == 0)
              {
                     max = min = *ptr;
              }
              if (*(ptr + i) > max)
                     max = *(ptr + i);
              if (*(ptr + i) < min)
                     min = *(ptr + i);
       }
       printf("Max: %.2f, Min: %.2f, Avg: %.2f\n", max, min, sum / 10.0);
       return 0;
}

#include <stdio.h>

int main()
{
       float arr[10], sum = 0, max, min;
       float *ptr = arr; // تعيين المؤشر لبداية المصفوفة

       printf("Enter 10 numbers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%f", (ptr + i)); // إدخال باستخدام Offset
              sum += *(ptr + i);

              if (i == 0)
              {
                     max = min = *ptr;
              }
              if (*(ptr + i) > max)
                     max = *(ptr + i);
              if (*(ptr + i) < min)
                     min = *(ptr + i);
       }
       printf("Max: %.2f, Min: %.2f, Avg: %.2f\n", max, min, sum / 10.0);
       return 0;
}

#include <stdio.h>

int main()
{
       char chars[10];
       char *ptr = chars;
       int pos = -1;

       printf("Enter 10 characters: ");
       for (int i = 0; i < 10; i++)
       {
              scanf(" %c", (ptr + i));
              if (*(ptr + i) == 'z' && pos == -1)
              {
                     pos = i;
              }
       }

       if (pos != -1)
              printf("Found 'z' at position: %d\n", pos);
       else
              printf("'z' not found.\n");
       return 0;
}

int countOccurrences(char str[], char ch)
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ch)
                     count++;
       }
       return count;
}

#include <string.h>
int isSubstring(char S1[], char S2[])
{
       if (strstr(S2, S1) != NULL)
              return 1; // استخدام دالة جاهزة للبحث
       return 0;
}

void reverseRecursive(char str[])
{
       if (*str == '\0')
              return;             // Base Case
       reverseRecursive(str + 1); // Recursive Step
       printf("%c", *str);        // الطباعة أثناء العودة من الـ Stack
}

int replace(char str[])
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ' ')
              {
                     str[i] = '-';
                     count++;
              }
       }
       return count;
}

#include <stdio.h>

struct Date
{
       int day, month, year;
};

struct Employee
{
       int id_no;
       float salary;
       struct Date birth_date;
       int tasks_ids[5];
};

// a) Function to input one employee data [cite: 194]
void inputEmployee(struct Employee *e)
{
       scanf("%d %f", &e->id_no, &e->salary);
       scanf("%d %d %d", &e->birth_date.day, &e->birth_date.month, &e->birth_date.year);
       for (int i = 0; i < 5; i++)
              scanf("%d", &e->tasks_ids[i]);
}

// b) Search function [cite: 195]
float getSalary(struct Employee arr[], int n, int search_id)
{
       for (int i = 0; i < n; i++)
       {
              if (arr[i].id_no == search_id)
                     return arr[i].salary;
       }
       return -1;
}


//sheet 4//
#include <stdio.h>

int main()
{
       float arr[10], sum = 0, max, min;
       float *ptr = arr; // تعيين المؤشر لبداية المصفوفة

       printf("Enter 10 numbers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%f", (ptr + i)); // إدخال باستخدام Offset
              sum += *(ptr + i);

              if (i == 0)
              {
                     max = min = *ptr;
              }
              if (*(ptr + i) > max)
                     max = *(ptr + i);
              if (*(ptr + i) < min)
                     min = *(ptr + i);
       }
       printf("Max: %.2f, Min: %.2f, Avg: %.2f\n", max, min, sum / 10.0);
       return 0;
}

#include <stdio.h>

int main()
{
       char chars[10];
       char *ptr = chars;
       int pos = -1;

       printf("Enter 10 characters: ");
       for (int i = 0; i < 10; i++)
       {
              scanf(" %c", (ptr + i));
              if (*(ptr + i) == 'z' && pos == -1)
              {
                     pos = i;
              }
       }

       if (pos != -1)
              printf("Found 'z' at position: %d\n", pos);
       else
              printf("'z' not found.\n");
       return 0;
}

int isAscending(int *ptr, int size)
{
       for (int i = 0; i < size - 1; i++)
       {
              // مقارنة العنصر الحالي باللي بعده باستخدام الـ Offset
              if (*(ptr + i) > *(ptr + i + 1))
              {
                     return 0; // غير مرتبة
              }
       }
       return 1; // مرتبة تصاعدياً
}

#include <stdio.h>

int main()
{
       int arr[10], oddSum = 0, evenSum = 0;
       int *ptr = arr;

       printf("Enter 10 integers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%d", (ptr + i));
              if (*(ptr + i) % 2 == 0)
              {
                     evenSum += *(ptr + i);
              }
              else
              {
                     oddSum += *(ptr + i);
              }
       }
       printf("Even Sum: %d, Odd Sum: %d\n", evenSum, oddSum);
       return 0;
}

// sheet 5(Pointers - Pointer/Offset Notation) //
#include <stdio.h>

int main()
{
       int arr[10], inc = 0, dec = 0;
       int *ptr = arr; // تعيين المؤشر

       printf("Enter 10 integers: ");
       for (int i = 0; i < 10; i++)
       {
              scanf("%d", (ptr + i)); // قراءة باستخدام Offset
       }

       for (int i = 0; i < 9; i++)
       {
              if (*(ptr + i) < *(ptr + i + 1))
                     inc = 1; // [cite: 233]
              if (*(ptr + i) > *(ptr + i + 1))
                     dec = 1; // [cite: 234]
       }

       if (inc && !dec)
              printf("the numbers in the array are increasing\n"); // [cite: 233]
       else if (!inc && dec)
              printf("the numbers in the array are decreasing\n"); // [cite: 234]
       else if (!inc && !dec)
              printf("the numbers in the array are not changing\n"); // [cite: 235]
       else
              printf("the numbers in the array are increasing and then decreasing\n"); // [cite: 236]

       return 0;
}

// sheet 6(Pointers, Strings, & Unions) //
int num = 25;
int *ptr = &num;
//printf("Value: %d", *ptr);


char *name = "Ahmed Sobhy";
//printf("Name: %s", name);

void calcFuel(float miles, float totalFuel, float *perMile)
{
       *perMile = totalFuel / miles; 
}

int a[5] = {1, 2, 3, 4, 5}, sum = 0;
int *ptr = a, *sPtr = &sum;
//for (int i = 0; i < 5; i++)
//{
       //printf("%d ", *(ptr + i)); // [cite: 256]
       //*sPtr += *(ptr + i);       // [cite: 258]
//}

//int getGreatest(int *arr, int n)
//{
       //int max = *arr;
       //for (int i = 1; i < n; i++)
       //{
             // if (*(arr + i) > max)
                  //   max = *(arr + i);
      // }
       //return max; // [cite: 261]
//}

struct Person
{
       char name[50];
       int age;
       int isUS;
       union Location
       {
              char state[30];   // [cite: 267]
              char country[30]; // [cite: 268]
       } loc;
};

struct HealthProfile
{
       char fName[20], lName[20], gender;
       int d, m, y;
       float height, weight;
};

float calculateBMI(struct HealthProfile h)
{
       return h.weight / (h.height * h.height); // [cite: 277]
}

//Sheet #7 Solutions(Search &Sort Algorithms)//
int isSorted(int arr[], int n)
{
       for (int i = 0; i < n - 1; i++)
       {
              if (arr[i] > arr[i + 1])
                     return 0; // لو لقيت عنصر أكبر من اللي بعده يبقى مش مرتبة
       }
       return 1;
}

void bubbleSortOptimized(int arr[], int n)
{
       int swapped;
       for (int i = 0; i < n - 1; i++)
       {
              swapped = 0; // بنصفر العلم في بداية كل لفة
              for (int j = 0; j < n - i - 1; j++)
              {
                     if (arr[j] > arr[j + 1])
                     {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                            swapped = 1; // حصل تبديل
                     }
              }
              if (swapped == 0)
                     break; // لو مفيش أي تبديل حصل، يبقى المصفوفة مرتبة.. وقف اللوب [cite: 337]
       }
}

int recursiveSearch(int arr[], int n, int target)
{
       if (n == 0)
              return -1; // لو وصلنا لآخر المصفوفة ومالقناش حاجة
       if (arr[n - 1] == target)
              return n - 1;                        // لو لقيناه في آخر عنصر
       return recursiveSearch(arr, n - 1, target); // كمل بحث في اللي قبله
}

#include <stdio.h>

void calculateMean(int arr[], int n)
{
       float sum = 0;
       for (int i = 0; i < n; i++)
              sum += arr[i];
       printf("Mean: %.2f\n", sum / n);
}

// ملاحظة: الـ Median بيحتاج المصفوفة تكون Sorted أولاً
int main()
{
       int arr[5] = {1, 2, 2, 3, 4}, choice;
       printf("1. Mean\n2. Mode\n3. Median\nChoice: ");
       scanf("%d", &choice);
       if (choice == 1)
              calculateMean(arr, 5);
       // ... باقي الدوال بنفس المنطق
       return 0;
}

void replace(char str[])
{
       int count = 0;
       for (int i = 0; str[i] != '\0'; i++)
       {
              if (str[i] == ' ')
              {
                     str[i] = '-';
                     count++;
              }
       }
       printf("Replaced %d spaces.\n", count); // [cite: 346]
}

// Sheet #8 Solutions (File Processing & Bitwise)//
#include <stdio.h>
int main()
{
       FILE *f1 = fopen("file1.txt", "r"), *f2 = fopen("file2.txt", "r");
       char ch1, ch2;
       int same = 1;
       while (((ch1 = fgetc(f1)) != EOF) && ((ch2 = fgetc(f2)) != EOF))
       {
              if (ch1 != ch2)
              {
                     same = 0;
                     break;
              }
       }
       if (same)
              printf("Files are identical.\n");
       else
              printf("Files are different.\n");
       fclose(f1);
       fclose(f2);
       return 0;
}

void extractChars()
{
       FILE *src = fopen("binary.bin", "rb"), *dest = fopen("output.txt", "w");
       char ch;
       while (fread(&ch, 1, 1, src))
       {
              if (ch >= 32 && ch <= 127)
                     fputc(ch, dest); // [cite: 360]
       }
       fclose(src);
       fclose(dest);
}

void writeSquares()
{
       FILE *fptr = fopen("squares.txt", "w");
       for (int x = 1; x <= 10; x++)
       {
              fprintf(fptr, "x: %d, x^2: %d\n", x, x * x);
       }
       fclose(fptr);
}

#include <stdio.h>

void studentSystem()
{
       int id;
       char name[50];
       float grade;
       FILE *fptr = fopen("student.txt", "a+"); // فتح للإضافة والقراءة

       printf("Enter Id, Name, Grade: ");
       scanf("%d %s %f", &id, name, &grade);
       fprintf(fptr, "%d %s %.2f\n", id, name, grade);
       rewind(fptr); // ارجع لأول الملف عشان تقرأ [cite: 363]

       printf("\nAll Students Info:\n");
       while (fscanf(fptr, "%d %s %f", &id, name, &grade) != EOF)
       {
              printf("ID: %d, Name: %s, Grade: %.2f\n", id, name, grade);
       }
       fclose(fptr);
}
void copyClean()
{
       FILE *src = fopen("source.txt", "r"), *dest = fopen("clean.txt", "w");
       char line[100];
       while (fgets(line, sizeof(line), src))
       {
              if (line[0] != '\n' && line[0] != '\r')
                     fputs(line, dest);
       }
       fclose(src);
       fclose(dest);
}
