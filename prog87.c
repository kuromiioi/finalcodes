#include <stdio.h>

// Structure to hold student information
struct Student {
    char name[100];
    int rollNo;
    float marks;
};

// Function to display students with marks greater than 500
void displayPassingStudents(struct Student students[], int size) {
    int i; // Loop variable
    printf("\nStudents with marks greater than 500:\n");
    printf("-------------------------------------------------\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("%d\t%s\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[10]; // Array to hold information of 10 students
    int i; // Loop variable

    // Input information for 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume the newline character left by previous input
        printf("Name: ");
        gets(students[i].name); // Use gets for older compilers
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display students with marks greater than 500
    displayPassingStudents(students, 10);

    return 0;
}
