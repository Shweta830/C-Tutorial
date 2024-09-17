//file input output
#include<stdio.h>
int main()
{
    FILE  *fptr;
    fptr = fopen("d.txt","r");
    fclose(fptr);
    return 0;
}