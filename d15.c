// Write a program to check if the given number is a
// natural number.
#include<stdio.h>
int main()
{
     int num;
     printf("enter the number:");
     scanf("%d",&num);
     if (num>0)
     {
        printf("%d is the natural number:",num);
     }
     else{
        printf("%d is the not  natural number:",num);

     }
     
    return 0;
}