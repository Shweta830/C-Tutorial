//file input output
#include<stdio.h>
int main()
{
    FILE  *fptr;
    fptr = fopen("Test.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("Character = %d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("Character = %d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("Character = %d\n",ch);
    
    fclose(fptr);
    return 0;
}