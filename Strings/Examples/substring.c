/* To extract a substring from a string */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20], news[20];
    char *s, *t;
    int pos, n, i;

    printf("\nEnter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    str[strcspn(str, "\n")] = 0; // Remove newline if present

    printf("Enter position and no. of characters to extract: ");
    if (scanf("%d %d", &pos, &n) != 2) {
        printf("Error reading position and number of characters\n");
        return 1;
    }

    s = str;
    t = news;

    if (pos < 0 || pos > strlen(str))
    {
        printf("Improper position value\n");
        return 1;
    }

    if (n < 0)
        n = 0;
    if (n > strlen(str) - pos)
        n = strlen(str) - pos;

    s = s + pos;
    for (i = 0; i < n; i++)
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';

    printf("The substring is: %s\n", news);
    return 0;
}