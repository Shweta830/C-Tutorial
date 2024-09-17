#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if (ch >= 'a' && ch<='z')
    {
        printf("lower case");
    }else if(ch>='A' && ch<='Z'){
        printf("upper Case");
    }
    else{
        printf("another chracter");
    }
    
    return 0;
}