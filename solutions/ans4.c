//a. Write a function to find sum of digits of a number.
#include<stdio.h>
int sumDigit(int n);
int main()
{
    int num,res;
    printf("enter the num");
    scanf("%d",&num);
    res=sumDigit(num);
    printf("sum of digits of %d  is :%d\n",num,res);
    return 0;
}
int sumDigit(int n){
    int sum =0;
    while (n!=0)
    {
    sum+=n%10;
    n=n/10;
}
   return sum;  
}