#include <stdio.h>

#define STUDENTS 10
#define SUBJECTS 3

int main() {
    int rollNo[STUDENTS];
    int marks[STUDENTS][SUBJECTS]; // 2D array to store marks
    int totalMarks[STUDENTS] = {0}; // Array to store total marks for each student
    int highestMarks[SUBJECTS] = {0}; // Array to store highest marks in each subject
    int highestRollNo[SUBJECTS] = {0}; // Array to store roll numbers of highest marks
    int highestTotalMarks = 0; // Variable to store the highest total marks
    int topStudentRollNo = 0; // Roll number of the student with the highest total marks

    // Input data for each student
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter Roll No. for Student %d: ", i + 1);
        scanf("%d", &rollNo[i]);
        
        printf("Enter marks for Subject 1, Subject 2, Subject 3:\n");
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j]; // Calculate total marks for the student

            // Check for highest marks in each subject
            if (marks[i][j] > highestMarks[j]) {
                highestMarks[j] = marks[i][j];
                highestRollNo[j] = rollNo[i];
            }
        }
    }

    // Determine the student with the highest total marks
    for (int i = 0; i < STUDENTS; i++) {
        if (totalMarks[i] > highestTotalMarks) {
            highestTotalMarks = totalMarks[i];
            topStudentRollNo = rollNo[i];
        }
    }

    // Output results
    printf("\nTotal marks obtained by each student:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Roll No. %d: Total Marks = %d\n", rollNo[i], totalMarks[i]);
    }

    printf("\nHighest marks in each subject:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: Highest Marks = %d (Roll No. %d)\n", j + 1, highestMarks[j], highestRollNo[j]);
    }

    printf("\nStudent with the highest total marks:\n");
    printf("Roll No. %d: Total Marks = %d\n", topStudentRollNo, highestTotalMarks);

    return 0;
}
