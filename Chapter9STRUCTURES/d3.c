//initializing structures
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
    printf("Name :%s",s1.name);

    
    return 0;
}