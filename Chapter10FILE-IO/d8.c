//2 numbers a and b are written in a file. write a program
// to replace them with their sum
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("d8.txt","r");
int a;
fscanf(fptr,"%d",&a);
int b;
fscanf(fptr,"%d",&b);

    fclose(fptr);
    fptr=fopen("d8.txt","w");
    fprintf(fptr,"%d", a+b);

    return 0;
}