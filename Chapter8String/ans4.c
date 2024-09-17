//Write a program to replace lowercase letters with
//uppercase & vice versa in a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);


    for ( i = 0;str[i]!='\0'; i++)
    {
    if (str[i]>='a' && str[i] <= 'z')
    {
        str[i]=str[i]-'a' +'A';
    }
    else if (str[i]>='A' && str[i] <= 'Z')
    {
        str[i]=str[i]-'A' +'a';
    }
    }
    printf("string is :%s",str);
    return 0;
}
