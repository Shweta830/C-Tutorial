//write a program to store the first n fibonacci numbers.
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the no :");
   scanf("%d",&n);
   int fib[n];
   fib[0] = 0;
   fib[1] = 1;
for (int i = 2; i <n; i++)
{
    fib[i]=fib[i-1]+fib[i-2];
    printf("%d\t",fib[i]);

}
printf("\n");
    return 0;
}