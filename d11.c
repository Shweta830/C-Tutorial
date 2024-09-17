//Write a program to print the average of 3 numbers.
#include<stdio.h>
int main()
{
    
int a,b,c;
printf("enter the no of a , b, c:");
scanf("%d%d%d",&a,&b,&c);
int avg;
avg=(a+b+c)/3;
printf("Average of :%d",avg);
    return 0;
}