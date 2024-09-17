//to find maximum and minimum no recursively
#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int max_rest = findMax(arr, n - 1);

    return (arr[n - 1] > max_rest) ? arr[n - 1] : max_rest;
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int min_rest = findMin(arr, n - 1);

    return (arr[n - 1] < min_rest) ? arr[n - 1] : min_rest;
}

int main() {
    int arr[] = {12, 5, 7, 89, 45, 23, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);
    int min = findMin(arr, n);

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
