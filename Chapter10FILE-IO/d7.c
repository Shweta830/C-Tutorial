//write a program to write all the odd numbers from 1
// to n in a file
#include<stdio.h>
int main()
{
  FILE *fptr;
  fptr=fopen("odd.txt","w");
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        if (i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }
        
    }
    fclose(fptr);
    return 0;
}