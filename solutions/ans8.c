//Write a program in C to find the maximum number
//between two numbers using a pointer.
#include<stdio.h>

void findMax(int *n1,int *n2,int *max){
    if (*n1 > *n2)
    {
        *max=*n1;
    }else{
        *max=*n2;
    }
    
}
int main()
{
    int n1,n2,max;
printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    findMax(&n1,&n2,&max);
    printf("the maximum number is: %d\n",max);
    return 0;
}