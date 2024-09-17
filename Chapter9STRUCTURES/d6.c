//typeof of struct
#include<stdio.h>
#include<string.h>
typedef struct  student
{
    int roll;
    char name[100];
} stu;
 


int main()
{
   stu s1;
   s1.roll=2345;
   strcpy(s1.name,"Nisha");
   printf("Student name is %s\n",s1.name);

    
    return 0;
}