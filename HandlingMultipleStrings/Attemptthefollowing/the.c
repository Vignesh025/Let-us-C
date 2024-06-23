#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

void removeWord(char *str, const char *word) {
    char *src = str;
    char *dst = str;
    int word_len = strlen(word);

    while (*src) {
        if (strncmp(src, word, word_len) == 0 && (src == str || !isalpha(*(src - 1))) && (!isalpha(*(src + word_len)))) {
            src += word_len;
        } else {
            *dst++ = *src++;
        }
    }

    *dst = '\0';
}

int main() {
    char line[MAX_LENGTH];
    const char word[] = "the";

    printf("Enter a line of text: ");
    fgets(line, MAX_LENGTH, stdin);

    removeWord(line, word);

    printf("Line with '%s' removed: %s", word, line);

    return 0;
}