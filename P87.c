#include <stdio.h>

#define NUM_STUDENTS 10

// Define a structure to hold student information
struct Student {
    char name[50];
    int rollNumber;
    int marks;
};

// Function to read information of students
void readStudentInfo(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);  // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }
}

// Function to display information of students with marks greater than 500
void displayHighScorers(struct Student students[], int n) {
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }
}

int main() {
    struct Student students[NUM_STUDENTS];

    // Read student information
    readStudentInfo(students, NUM_STUDENTS);

    // Display students with marks greater than 500
    displayHighScorers(students, NUM_STUDENTS);
 return 0;
}
