#include<stdio.h>
int main()
{
    int num,digit,count=0;
    printf("enter the no:");
    scanf("%d",&num);
    printf("the digit to find:");
    scanf("%d",&digit);
while (num>0)
{
    if (num%10 == digit)
    {
        count++;
    }
  num=num/10;  
}
    printf("The digit %d occurs %d times in the number.\n", digit, count,num);

    return 0;
}