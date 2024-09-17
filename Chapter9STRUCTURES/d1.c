// STRUCTURES
#include <stdio.h>
#include <string.h>
// user defined
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 9004;
    // s1.name="shweta";
    strcpy(s1.name, "Shweta");
    s1.cgpa = 8.3;
    printf("Student roll no : %d\n", s1.roll);
    printf("Student name is : %s\n", s1.name);
    printf("Student cgpa : %f\n", s1.cgpa);
    
     struct student s2;
    s2.roll = 9001;
    // s1.name="shweta";
    strcpy(s2.name, "Nisha");
    s2.cgpa = 8.90;
    printf("Student roll no : %d\n", s2.roll);
    printf("Student name is : %s\n", s2.name);
    printf("Student cgpa : %f\n", s2.cgpa);

     struct student s3;
    s3.roll = 9006;
    // s1.name="shweta";
    strcpy(s3.name, "Neetoo");
    s3.cgpa = 8.3;
    printf("Student roll no : %d\n", s3.roll);
    printf("Student name is : %s\n", s3.name);
    printf("Student cgpa : %f\n", s3.cgpa);
    return 0;
}