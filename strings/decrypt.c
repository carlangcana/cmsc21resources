#include <stdio.h>
#include <string.h>

void decrypt(char *ciphertext, char *plaintext, int key) {
    int length = strlen(ciphertext);
    int columns = (length + key - 1) / key;
    char grid[key][columns];

    int index = 0;
    for (int i = 0; i < key; i++) {
        for (int j = 0; j < columns; j++) {
            grid[i][j] = ciphertext[index];
            index++;
        }
    }

    index = 0;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < key; j++) {
            if (grid[j][i] != ' ') {
                plaintext[index] = grid[j][i];
                index++;
            }
        }
    }
}

int main() {
    char ciphertext[100];
    char plaintext[100];
    int key;
    char temp; // Serves as the buffer variable

    printf("Enter the ciphertext: ");
    scanf("%[^\n]", ciphertext);

    printf("Enter the key (number of columns): ");
    scanf("%d", &key);

    // Clear the input buffer
    while ((temp = getchar()) != '\n' && temp != EOF);

    // Perform the decryption
    decrypt(ciphertext, plaintext, key);

    printf("Decrypted Plaintext: %s\n", plaintext);

    return 0;
}
