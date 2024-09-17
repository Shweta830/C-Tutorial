//Write a program to insert an element at the end of
//an array
#include<stdio.h>
int main()
{
    int n,i,new_element;
    printf("ENter the element of the array:");
    scanf("%d",&n);
    int arr[n+1];
    printf("ENter the no of element of the array:");
    for ( i = 0; i <n; i++)
    {
    scanf("%d",&arr[i]);
    }
     printf("ENter the new element in the array:");
    scanf("%d",&new_element);
    arr[n]=new_element;

         printf("after inserted the new element in the array:");
for ( i = 0; i <=n; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");

    
    return 0;
}