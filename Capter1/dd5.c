//To check the number is palindrome or not
#include <stdio.h>
#include <stdbool.h>
int reverseNum(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}
// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    return num == reverseNum(num);
}

int main() {
    int num;

    printf("Enter a non-palindrome number: ");
    scanf("%d", &num);

    //check 
    if (isPalindrome(num))
    {
        printf("%d is a palindrome no.\n",num);
    }else{
               printf("%d is not a palindrome no.\n",num);
 
    }
    
    return 0;
}
