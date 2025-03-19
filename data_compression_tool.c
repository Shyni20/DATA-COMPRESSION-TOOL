#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncoding(char *input, char *output) {
    int len = strlen(input), count, i, j = 0;

    for (i = 0; i < len; i++) {
        count = 1;

        // Count consecutive characters
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Add the character and its count to the output
        output[j++] = input[i];
        output[j++] = count + '0'; // Convert count to a character
    }
    output[j] = '\0'; // Null-terminate the string
}

int main() {
    char input[100], output[200];

    printf("Enter a string to compress: ");
    scanf("%s", input);

    runLengthEncoding(input, output);

    printf("Compressed string: %s\n", output);

    return 0;
}
