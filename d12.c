// Write a program to check if given character is digit
// or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter the charchter");
    scanf("%c",&ch);
    if (isdigit(ch))
    {
        printf("The character '%c' is a digit.\n", ch);
    }
    else{
        printf("The character '%c' is not  a digit.\n",ch);
    }
    
    
    return 0;
}