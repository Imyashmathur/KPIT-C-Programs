#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isVowel(char c) {
    char lower = tolower(c);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main() {
    char line[256];
    int count = 0;

   
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

  
    line[strcspn(line, "\n")] = '\0';


    for (int i = 0; line[i] != '\0'; i++) {
        if (isVowel(line[i]) && isVowel(line[i + 1])) {
            printf("%c%c ", line[i], line[i + 1]);
            count++;
        }
    }

    printf("\nNumber of occurrences of successive vowels: %d\n", count);

    return 0;
}
