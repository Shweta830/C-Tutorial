//write a function to count the no of odd numbers in an array.
#include<stdio.h>
int CountOdd(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf(" odd number is :%d\n",CountOdd(arr,7));
    return 0;
}
int CountOdd(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        {
            count++;
        }
        
    }
    return count;
}
