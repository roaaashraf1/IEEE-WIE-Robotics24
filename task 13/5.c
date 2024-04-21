#include <stdio.h>
#include <ctype.h> // For character classification functions

void main(void) {
    char name[30]; //  maximum input length of 30 characters
    int v= 0, c = 0;

    // ask the user for name
    printf("please enter the name: ");
    gets(name); //get the name from the user


    // Count vowels and consonants
    for (int i = 0; name[i] != '\0'; i++) {
        if (isalpha(name[i])) {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }
//print the number of vowels and consonants
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
}


