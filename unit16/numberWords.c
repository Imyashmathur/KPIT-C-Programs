#include <stdio.h>
#include <string.h>

void convert_to_words(char *num);

int main() {
    char num[10];
    printf("Enter an integer (up to 9 digits): ");
    scanf("%s", num);
    
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1;
        }
    }
    convert_to_words(num);
    return 0;
}

void convert_to_words(char *num) {
    int len = strlen(num);
    char *single_digits[] = { "", "One", "Two", "Three", "Four", 
                              "Five", "Six", "Seven", "Eight", "Nine" };
    char *two_digits[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", 
                           "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    char *tens_multiple[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", 
                              "Sixty", "Seventy", "Eighty", "Ninety" };
    char *tens_power[] = { "Hundred", "Thousand", "Million" };
    
    if (len == 1 && num[0] == '0') {
        printf("Zero\n");
        return;
    }
    int idx = 0;
    if (len >= 7) {
        if (num[idx] - '0' != 0) {
            printf("%s Million ", single_digits[num[idx] - '0']);
        }
        idx++;
        len--;
    }
    if (len >= 4) {
        if (num[idx] - '0' != 0) {
            printf("%s Thousand ", single_digits[num[idx] - '0']);
        }
        idx++;
        len--;
    }
    if (len >= 3) {
        if (num[idx] - '0' != 0) {
            printf("%s Hundred ", single_digits[num[idx] - '0']);
        }
        idx++;
        len--;
    }
    if (len >= 2) {
        if (num[idx] - '0' == 1) {
            printf("%s ", two_digits[num[idx + 1] - '0']);
            return;
        } else if (num[idx] - '0' != 0) {
            printf("%s ", tens_multiple[num[idx] - '0']);
        }
        idx++;
        len--;
    }
    if (len == 1 && num[idx] - '0' != 0) {
        printf("%s ", single_digits[num[idx] - '0']);
    }
    
    printf("\n");
}
