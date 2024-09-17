//Write a program in C to print the elements of an
//array in reverse order.//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
   printf("enter %d elements:\n",n);
   for (int i = 0; i <n; i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("the elements in reverse order are :\n");
   for (int i=n-1; i>=0; i--)
   {
    printf("%d",arr[i]);
   }
   printf("\n");
   
    return 0;
}