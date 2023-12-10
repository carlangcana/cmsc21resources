#include <stdio.h>
#include <string.h>

void transpose(char *plaintext, char *ciphertext, int key) {
    int length = strlen(plaintext);
    int columns = (length + key - 1) / key;
    char grid[key][columns];

    int index = 0;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < key; j++) {
            if (index < length) {
                grid[j][i] = plaintext[index];
                index++;
            } else {
                grid[j][i] = ' ';
            }
        }
    }

    index = 0;
    for (int i = 0; i < key; i++) {
        for (int j = 0; j < columns; j++) {
            ciphertext[index] = grid[i][j];
            index++;
        }
    }
}

int main() {
    char plaintext[100];
    char ciphertext[100];
    int key;
    char temp; // Serves as the buffer variable

    printf("Enter the plaintext: ");
    scanf("%[^\n]", plaintext);

    printf("Enter the key (number of columns): ");
    scanf("%d", &key);

    // Clear the input buffer
    while ((temp = getchar()) != '\n' && temp != EOF);

    // Perform the transposition
    transpose(plaintext, ciphertext, key);

    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}
