//pointer to pointer
#include<stdio.h>
int main()
{
    int i =5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n",**pptr); //5
    return 0;
}