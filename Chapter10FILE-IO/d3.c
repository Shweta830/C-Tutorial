//file input output
#include<stdio.h>
int main()
{
    FILE  *fptr;
    fptr = fopen("Test1.txt","a");
    fprintf(fptr,"%c","M");
        fprintf(fptr,"%c","A");
    fprintf(fptr,"%c","N");
    fprintf(fptr,"%c","G");
    fprintf(fptr,"%c","O");

   
    
    fclose(fptr);
    return 0;
}