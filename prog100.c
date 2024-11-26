#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[100];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    int n, i;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Open the file in write mode. If it doesn't exist, it will be created.
    file = fopen("LNMIITSTUDENT.JAVA", "w");
    
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // Loop to input and store the details of each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input roll number, name, and total marks for each student
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        
        printf("Name: ");
        getchar();  // To consume the newline character left by scanf
        fgets(student.name, sizeof(student.name), stdin);  // Input student name with spaces
        
        printf("Total Marks: ");
        scanf("%f", &student.totalMarks);

        // Write the student's details to the file
        fprintf(file, "Roll Number: %d\n", student.rollNumber);
        fprintf(file, "Name: %s", student.name);  // Name already includes newline from fgets
        fprintf(file, "Total Marks: %.2f\n\n", student.totalMarks);
    }

    // Close the file
    fclose(file);

    printf("\nStudent details have been successfully written to LNMIITSTUDENT.JAVA.\n");

    return 0;
}
