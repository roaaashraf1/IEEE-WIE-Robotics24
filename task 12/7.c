#include <stdio.h>
void main (void) {
      int num, i = 2;
    int isPrime = 1; // assume the number is prime initially

    // ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // check if the number is less than 2
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
        return 0;

    }

    // check if the number is divisible by any number from 2 to num/2
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0; // set isPrime to 0 if the number is divisible by i
            break; // exit the if function
        }
        i++;
    }

    // print the result based on isPrime
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

