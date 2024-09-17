#include<stdio.h>
//function declaration
void namste();
void bonjur();


int main()
{
    //function cll
    printf("enter f for french and i for india :");
    char ch;
    scanf("%c",&ch);
    if (ch=='i')
    {
     namste();
    }else{
        bonjur();
    }
    
    
    return 0;
}
//function definition
void namste(){
    printf("Namste\n");
}
void bonjur(){
    printf("Bonjur\n");

}

