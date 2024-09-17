//Write a program to print prime numbers in a range
#include<stdio.h>
int isPrime(int num);
int main()
{
    int strt,end,i;
    printf("enter the number of start and end:");
    scanf("%d%d",&strt,&end);
    printf("Prime num between %d and %d are:\n",strt,end);
    for ( i = strt; i <=end; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}
int isPrime(int num){
    int j;
    if (num<=1)
        return 0;
        for ( j = 2; j <=num/2; j++)
        {
            if (num % j==0)
                return 0;
        }
             return 1;
        }
    