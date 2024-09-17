//In an array of numbers, find how many times does
//a number 'x' occurs.
#include<stdio.h>

int main()
{
    int n,x , count=0;
    printf("ENter the num of elements in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemnts of the array :\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

 printf("enter the elemnts of count :\n");
        scanf("%d",&x);
//count the occurrences of x
for (int i = 0; i <n; i++)
{
    if (arr[i]==x)
    {
        count++;
    }
    
}
    printf("The number %d occurs %d times in the array.\n", x, count);

    return 0;
}
