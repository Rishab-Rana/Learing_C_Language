#include <stdio.h>
#include <string.h>
struct Employee
{
    int employee_id;
    char name[20];
    int salary;
};

struct Organisation
{
    char organisation_name[20];
    char org_number[20];

    struct Employee emp;
};

int main()
{

    struct Organisation org;

    org.emp.employee_id = 0001;
   strcpy( org.emp.name,"Rishab Rana");
    org.emp.salary = 85000;
    strcpy(org.organisation_name, "Amazon");
    strcpy(org.org_number, "A54DW5W");

    // Printing the details
    printf("Organisation Name : %s\n",
           org.organisation_name);
    printf("Organisation Number : %s\n",
           org.org_number);
    printf("Employee id : %d\n",
           org.emp.employee_id);
    printf("Employee name : %s\n",
           org.emp.name);
    printf("Employee Salary : %d\n",
           org.emp.salary);
}