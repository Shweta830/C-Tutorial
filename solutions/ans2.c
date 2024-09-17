//b. Write a program to check if a number is prime or not.
#include<stdio.h>
int main()
{
   int num,i,isPrime=1;
   printf("enter the number:");
   scanf("%d",&num);
   //o and 1 arenot prime number
   if(num==0 || num==1){
    isPrime =0;
   } 
   else
   {
    for ( i = 2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            isPrime=0;
            break;
        }
        
    }
    
   }
   if (isPrime)
   {
    printf("%d is a prime number\n",num);
   }
   else{
    printf("%d is a not prime number\n",num);
   }
   
    return 0;
}