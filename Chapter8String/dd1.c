//find sum of individual digit of no 456=15
#include<stdio.h>
int main()
{
   int num ,sum=0;
   printf("ENter the no :");
   scanf("%d",&num);
   while (num >0)
   {
    sum+=num%10;
num=num/10;
   }
    printf("The sum of digits is:%d\n",sum);
    return 0;
}