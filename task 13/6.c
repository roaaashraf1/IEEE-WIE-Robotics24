#include <stdio.h>
void main(void) {
    int size;
    printf("Enter the size of the array: ");// ask the user for size off the array
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d the numbers : ", size);
    for (int i = 0; i < size; i++) {//for loop to enter the numbers in the array
        scanf("%d", &arr[i]);
    }

    printf("Output:\n");
    print_check(arr, size);

}

// function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

// function to print elements of the array and check if they are palindromes
void print_check(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (isPalindrome(arr[i])) {
            printf("is a palindrome\n");
        } else {
            printf("is not a palindrome\n");
        }
    }
}


