//Write a program to remove blank spaces in a string.
#include<stdio.h>
int main()
{
    char str[100],result[100];
    int i,j=0;
    printf("enter a string:");
fgets(str,sizeof(str),stdin);

    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]!=' ')
        {
            result[j++]=str[i];
        }
        
    }
    result[j]='\0';
    printf("String without spaces:%s",result);
    return 0;
}