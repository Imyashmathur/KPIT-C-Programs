#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_LENGTH 100

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int count;

    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &count);
    getchar(); // Consume the newline character after the number input

    printf("Enter the names:\n");
    for (int i = 0; i < count; i++) {
        fgets(names[i], MAX_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character
    }

    printf("\nAbbreviated names:\n");
    for (int i = 0; i < count; i++) {
        char result[MAX_LENGTH] = "";
        int len = strlen(names[i]);
        int start_of_word = 1;

        for (int j = 0; j < len; j++) {
            if (names[i][j] == ' ') {
                start_of_word = 1;
                if (names[i][j + 1] == ' ' || names[i][j + 1] == '\0') {
                    // Skip multiple spaces or spaces at the end
                    continue;
                }
            } else if (start_of_word) {
                strncat(result, &names[i][j], 1);
                strcat(result, ". ");
                start_of_word = 0;
            } else if (names[i][j + 1] == ' ' || names[i][j + 1] == '\0') {
                // Copy the last name without abbreviation
                strcat(result, &names[i][j]);
                break;
            }
        }

        printf("%s\n", result);
    }

    return 0;
}
