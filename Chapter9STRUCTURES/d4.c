//Pointers To Structures
#include<stdio.h>
#include<string.h>
struct d2
{
    int roll;
    char name[100];
};

int main()
{
    struct d2 s1={1234,"shweta"};
    printf("Roll no %d\n",s1.roll);
    printf("Name :%s\n",s1.name);
    struct d2 *ptr=&s1;
    printf("student roll is using pointer :%d\n",(*ptr).roll);
    printf("student name is   using pointer :%s\n",(*ptr).name);
 printf("student roll no is   using arrow operator :%d\n",ptr->roll); //arrow operator
 



    
    return 0;
}