#include <stdio.h>
void main(void) {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    int square[10][10];
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    if (isMagicSquare(square, size)) {
        printf("The square is a magic square.\n");
    } else {
        printf("The square is not a magic square.\n");
    }
}

// function to check if the given square matrix is a magic square
int isMagicSquare(int square[][10], int size) {
    // calculate the sum of the first row
    int sum = 0;
    for (int j = 0; j < size; j++) {
        sum += square[0][j];
    }

    // check if the sum of every row, column, and diagonal is equal to the sum of the first row
    for (int i = 1; i < size; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            return 0; // not a magic square
        }
    }

    // check the sum of the main diagonal
    int diagSum = 0;
    for (int i = 0; i < size; i++) {
        diagSum += square[i][i];
    }
    if (diagSum != sum) {
        return 0; // not a magic square
    }

    // check the sum of the secondary diagonal
    diagSum = 0;
    for (int i = 0; i < size; i++) {
        diagSum += square[i][size - i - 1];
    }
    if (diagSum != sum) {
        return 0; // Not a magic square
    }

    return 1; // It's a magic square
}


