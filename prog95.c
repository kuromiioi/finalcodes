#include <stdio.h>
#include <string.h>

// Define the structure for employee
struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee employ[50]; // Array of 50 Employee structures
    struct Employee *ptr;       // Structure pointer
    int n, i;

    // Input the number of employees
    printf("Enter the number of employees (N): ");
    scanf("%d", &n);

    // Input details for each employee
    for (i = 0; i < n; i++) {
        ptr = &employ[i]; // Point to the current employee
        printf("Enter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &ptr->empNumber); // Access employee number using pointer

        printf("Employee Name: ");
        fflush(stdin); // Clear input buffer
        gets(ptr->empName); // Access employee name using pointer

        printf("Basic Pay: ");
        scanf("%f", &ptr->basicPay); // Access basic pay using pointer
    }

    // Print the details of all employees
    printf("\nEmployee Details:\n");
    printf("Emp Number\tEmp Name\t\tBasic Pay\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < n; i++) {
        ptr = &employ[i]; // Point to the current employee
        printf("%d\t\t%s\t\t%.2f\n", ptr->empNumber, ptr->empName, ptr->basicPay);
    }

    return 0;
}
