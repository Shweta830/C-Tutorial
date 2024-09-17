// You can also make this into a C Project with other
// functionalities like cgpa calculation of students,
// storing attendance etc.
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_TEACHERS 50
#define MAX_STAFF 30

// Structure to store student information
struct Student {
    int id;
    char name[50];
    int age;
    char course[50];
    float marks[5];  // Assuming 5 subjects
    float cgpa;
    int attendance;
};

// Structure to store teacher information
struct Teacher {
    int id;
    char name[50];
    int age;
    char subject[50];
    float salary;
};

// Structure to store staff information
struct Staff {
    int id;
    char name[50];
    int age;
    char position[50];
    float salary;
};
void addStudent(struct Student students[], int *studentCount);
void addTeacher(struct Teacher teachers[], int *teacherCount);
void addStaff(struct Staff staff[], int *staffCount);
void calculateCGPA(struct Student *student);
void storeAttendance(struct Student *student, int attendance);
void displayStudents(struct Student students[], int studentCount);
void displayTeachers(struct Teacher teachers[], int teacherCount);
void displayStaff(struct Staff staff[], int staffCount);
void addStudent(struct Student students[], int *studentCount) {
    struct Student newStudent;
    newStudent.id = *studentCount + 1;
    printf("Enter student name: ");
    scanf("%s", newStudent.name);
    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student course: ");
    scanf("%s", newStudent.course);
    
    // Enter marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &newStudent.marks[i]);
    }

    // Initialize CGPA and attendance
    newStudent.cgpa = 0.0;
    newStudent.attendance = 0;

    // Store the new student in the array
    students[*studentCount] = newStudent;
    (*studentCount)++;
}
void calculateCGPA(struct Student *student) {
    float totalMarks = 0.0;
    for (int i = 0; i < 5; i++) {
        totalMarks += student->marks[i];
    }
    student->cgpa = totalMarks / 50.0;  // Assuming 10-point scale
}
void storeAttendance(struct Student *student, int attendance) {
    student->attendance += attendance;
}
void displayStudents(struct Student students[], int studentCount) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Course: %s, CGPA: %.2f, Attendance: %d%%\n",
               students[i].id, students[i].name, students[i].age, students[i].course, students[i].cgpa, students[i].attendance);
    }
}
int main() {
    struct Student students[MAX_STUDENTS];
    struct Teacher teachers[MAX_TEACHERS];
    struct Staff staff[MAX_STAFF];
    
    int studentCount = 0;
    int teacherCount = 0;
    int staffCount = 0;
    
    int choice;

    do {
        printf("\nCollege Management System\n");
        printf("1. Add Student\n");
        printf("2. Add Teacher\n");
        printf("3. Add Staff\n");
        printf("4. Calculate CGPA\n");
        printf("5. Store Attendance\n");
        printf("6. Display Students\n");
        printf("7. Display Teachers\n");
        printf("8. Display Staff\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                addTeacher(teachers, &teacherCount);
                break;
            case 3:
                addStaff(staff, &staffCount);
                break;
            case 4:
                if (studentCount > 0) {
                    int id;
                    printf("Enter student ID: ");
                    scanf("%d", &id);
                    if (id > 0 && id <= studentCount) {
                        calculateCGPA(&students[id-1]);
                        printf("CGPA calculated for %s: %.2f\n", students[id-1].name, students[id-1].cgpa);
                    } else {
                        printf("Invalid student ID\n");
                    }
                } else {
                    printf("No students available\n");
                }
                break;
            case 5:
                if (studentCount > 0) {
                    int id, attendance;
                    printf("Enter student ID: ");
                    scanf("%d", &id);
                    if (id > 0 && id <= studentCount) {
                        printf("Enter attendance percentage to add: ");
                        scanf("%d", &attendance);
                        storeAttendance(&students[id-1], attendance);
                    } else {
                        printf("Invalid student ID\n");
                    }
                } else {
                    printf("No students available\n");
                }
                break;
            case 6:
                displayStudents(students, studentCount);
                break;
            case 7:
                displayTeachers(teachers, teacherCount);
                break;
            case 8:
                displayStaff(staff, staffCount);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
