//find largest and samllest word in string
#include <stdio.h>

int main() {
    char str[1000];
    char smallest[100], largest[100];
    int i = 0, j = 0, start = 0;
    int minLen = 1000, maxLen = 0;
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input with spaces

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' || str[i] == '\n') {
            i++;
        }

        // Start of a word
        start = i;
        len = 0;

        // Count the length of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
            len++;
        }

        // Check for smallest word
        if (len > 0 && len < minLen) {
            minLen = len;
            for (j = 0; j < len; j++) {
                smallest[j] = str[start + j];
            }
            smallest[j] = '\0';  // Null-terminate the word
        }

        // Check for largest word
        if (len > maxLen) {
            maxLen = len;
            for (j = 0; j < len; j++) {
                largest[j] = str[start + j];
            }
            largest[j] = '\0';  // Null-terminate the word
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
