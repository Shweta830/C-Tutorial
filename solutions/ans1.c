// Search on what a "nested loop" is & print this
// pattern using it.
// *****
// *****
// *****


#include<stdio.h>
int main()
{
    int i,j;
    for (int i = 0; i<3; i++)
    {
        for(int j = 0; j <5; j++)
        {
            printf("*");
        }
         printf("\n");
    }
    
    return 0;
}