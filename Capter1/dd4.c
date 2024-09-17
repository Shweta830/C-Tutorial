//To generate a palindrom no from a non-palindrome no
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
// Function to generate a palindrome from a non-palindrome number
int genPalindrome(int num) {
    int reversed, sum;
    while (!isPalindrome(num)) {
        reversed = reverseNum(num);
        sum = num + reversed;
        num = sum;
    }
    return num;
}

int main() {
    int num;

    printf("Enter a non-palindrome number: ");
    scanf("%d", &num);

    // Generate palindrome
    int palindrome = genPalindrome(num);

    printf("Palindrome generated: %d\n", palindrome);

    return 0;
}
