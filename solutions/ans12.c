//Write a program to print the largest number in an
//array.
#include<stdio.h>
int main()
{
    int n,i,max;
    printf("enter the number of element in the array :");
    scanf("%d",&n);
    int arr[n];
        printf("enter the element in the array :");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for ( i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
        max=arr[i];
        }
        
    }
    
    printf("the largest number in the array is %d\n",max);
    
    
    return 0;
}