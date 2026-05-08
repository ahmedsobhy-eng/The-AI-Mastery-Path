#include <stdio.h>

struct staff
{
       int id;
       char name[30];
       float salary;
};

void sortByID(struct staff p[], int n)
{
       for (int i = 0; i < n - 1; i++)
       {
              for (int j = 0; j < n - i - 1; j++)
              {
                     if (p[j].id > p[j + 1].id)
                     { // ترتيب تصاعدي
                            struct staff temp = p[j];
                            p[j] = p[j + 1];
                            p[j + 1] = temp;
                     }
              }
       }
}

float calculateTotal(struct staff p[], int n)
{
       if (n <= 0)
              return 0; // Base Case [cite: 846]
       return p[n - 1].salary + calculateTotal(p, n - 1);
}

void generateReport(struct staff p[], int n, float bonus)
{
       FILE *fptr = fopen("staff_report.txt", "w");
       if (fptr == NULL)
       {
              printf("Error creating file!\n");
              return;
       }

       fprintf(fptr, "ID\tName\tSalary\n");
       fprintf(fptr, "--------------------------\n");
       for (int i = 0; i < n; i++)
       {
              fprintf(fptr, "%d\t%s\t%.2f\n", p[i].id, p[i].name, p[i].salary);
       }
       fprintf(fptr, "\nTotal Bonus (5%%): %.2f\n", bonus);

       fclose(fptr); 
}

int main()
{
       struct staff s[4]; 

       printf("Enter ID, Name, and Salary for 4 staff members:\n");
       for (int i = 0; i < 4; i++)
       {
              printf("Staff %d: ", i + 1);
              scanf("%d %s %f", &s[i].id, s[i].name, &s[i].salary);
       }

       sortByID(s, 4); 
       float total = calculateTotal(s, 4);
       float bonus = total * 0.05; 

       generateReport(s, 4, bonus);

       printf("\nDone! Report generated in 'staff_report.txt'.\n");
       return 0;
}