#include <stdio.h>

// Function to find the maximum number recursively
int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int max_rest = findMax(arr, n - 1);
    return (arr[n - 1] > max_rest) ? arr[n - 1] : max_rest;
}

// Function to find the minimum number recursively
int findMin(int arr[], int n) {
    if (n == 1) return arr[0];
    int min_rest = findMin(arr, n - 1);
    return (arr[n - 1] < min_rest) ? arr[n - 1] : min_rest;
}

int main() {
    int arr[] = {12, 5, 7, 89, 45, 23, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum number: %d\n", findMax(arr, n));
    printf("Minimum number: %d\n", findMin(arr, n));

    return 0;
}
