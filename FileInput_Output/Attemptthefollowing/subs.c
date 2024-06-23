#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void encrypt_and_write(FILE *df, char *line);
void decrypt_and_print(FILE *df);

int main()
{
    int i;
    FILE *df;
    char name[256];
    char choice;
    df = fopen("subs.txt", "w+");
    if (df == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    printf("Do you want to add line in File(y/n):");
    choice = getchar();
    getchar(); // To consume the newline character after the choice input
    while (choice == 'y')
    {
        printf("\nEnter New line for the file: ");
        fgets(name, sizeof(name), stdin);

        // Remove newline character from the input if present
        name[strcspn(name, "\n")] = 0;

        encrypt_and_write(df, name);

        printf("\nDo you want to add line in File(y/n): ");
        choice = getchar();
        getchar(); // To consume the newline character after the choice input
    }

    printf("\nEntered data in the file (Encrypted):\n");
    rewind(df);
    while (fgets(name, sizeof(name), df) != NULL)
    {
        printf("%s", name);
    }

    printf("\nEntered data in the file (Decrypted):\n");
    rewind(df);
    decrypt_and_print(df);

    fclose(df);
    return 0;
}

void encrypt_and_write(FILE *df, char *line)
{
    int i = 0;
    while (line[i] != '\0')
    {
        switch (line[i])
        {
        case 'a': fputc('0', df); fputc('!', df); break;
        case 'A': fputc('!', df); break;
        case 'b': fputc('0', df); fputc('#', df); break;
        case 'B': fputc('#', df); break;
        case 'c': fputc('0', df); fputc('$', df); break;
        case 'C': fputc('$', df); break;
        case 'd': fputc('0', df); fputc('%', df); break;
        case 'D': fputc('%', df); break;
        case 'e': fputc('0', df); fputc('&', df); break;
        case 'E': fputc('&', df); break;
        case 'f': fputc('0', df); fputc('*', df); break;
        case 'F': fputc('*', df); break;
        case 'g': fputc('0', df); fputc('(', df); break;
        case 'G': fputc('(', df); break;
        case 'h': fputc('0', df); fputc(')', df); break;
        case 'H': fputc(')', df); break;
        case 'i': fputc('0', df); fputc('+', df); break;
        case 'I': fputc('+', df); break;
        case 'j': fputc('0', df); fputc('/', df); break;
        case 'J': fputc('/', df); break;
        case 'k': fputc('0', df); fputc('{', df); break;
        case 'K': fputc('{', df); break;
        case 'l': fputc('0', df); fputc('}', df); break;
        case 'L': fputc('}', df); break;
        case 'm': fputc('0', df); fputc(';', df); break;
        case 'M': fputc(';', df); break;
        case 'n': fputc('0', df); fputc(':', df); break;
        case 'N': fputc(':', df); break;
        case 'o': fputc('0', df); fputc('[', df); break;
        case 'O': fputc('[', df); break;
        case 'p': fputc('0', df); fputc(']', df); break;
        case 'P': fputc(']', df); break;
        case 'q': fputc('0', df); fputc('"', df); break;
        case 'Q': fputc('"', df); break;
        case 'r': fputc('0', df); fputc('`', df); break;
        case 'R': fputc('`', df); break;
        case 's': fputc('0', df); fputc('\\', df); break;
        case 'S': fputc('\\', df); break;
        case 't': fputc('0', df); fputc('|', df); break;
        case 'T': fputc('|', df); break;
        case 'u': fputc('0', df); fputc('=', df); break;
        case 'U': fputc('=', df); break;
        case 'v': fputc('0', df); fputc('-', df); break;
        case 'V': fputc('-', df); break;
        case 'w': fputc('0', df); fputc('_', df); break;
        case 'W': fputc('_', df); break;
        case 'x': fputc('0', df); fputc('<', df); break;
        case 'X': fputc('<', df); break;
        case 'y': fputc('0', df); fputc('^', df); break;
        case 'Y': fputc('^', df); break;
        case 'z': fputc('0', df); fputc('?', df); break;
        case 'Z': fputc('?', df); break;
        case ' ': fputc('1', df); break;
        default: fputc(line[i], df);
        }
        i++;
    }
    fputc('\n', df);
}

void decrypt_and_print(FILE *df)
{
    char ch;
    while ((ch = fgetc(df)) != EOF)
    {
        if (ch == '0')
        {
            ch = fgetc(df);
            switch (ch)
            {
            case '!': putchar('a'); break;
            case '#': putchar('b'); break;
            case '$': putchar('c'); break;
            case '%': putchar('d'); break;
            case '&': putchar('e'); break;
            case '*': putchar('f'); break;
            case '(': putchar('g'); break;
            case ')': putchar('h'); break;
            case '+': putchar('i'); break;
            case '/': putchar('j'); break;
            case '{': putchar('k'); break;
            case '}': putchar('l'); break;
            case ';': putchar('m'); break;
            case ':': putchar('n'); break;
            case '[': putchar('o'); break;
            case ']': putchar('p'); break;
            case '"': putchar('q'); break;
            case '`': putchar('r'); break;
            case '\\': putchar('s'); break;
            case '|': putchar('t'); break;
            case '=': putchar('u'); break;
            case '-': putchar('v'); break;
            case '_': putchar('w'); break;
            case '<': putchar('x'); break;
            case '^': putchar('y'); break;
            case '?': putchar('z'); break;
            default: putchar('0'); putchar(ch); break;
            }
        }
        else
        {
            switch (ch)
            {
            case '!': putchar('A'); break;
            case '#': putchar('B'); break;
            case '$': putchar('C'); break;
            case '%': putchar('D'); break;
            case '&': putchar('E'); break;
            case '*': putchar('F'); break;
            case '(': putchar('G'); break;
            case ')': putchar('H'); break;
            case '+': putchar('I'); break;
            case '/': putchar('J'); break;
            case '{': putchar('K'); break;
            case '}': putchar('L'); break;
            case ';': putchar('M'); break;
            case ':': putchar('N'); break;
            case '[': putchar('O'); break;
            case ']': putchar('P'); break;
            case '"': putchar('Q'); break;
            case '`': putchar('R'); break;
            case '\\': putchar('S'); break;
            case '|': putchar('T'); break;
            case '=': putchar('U'); break;
            case '-': putchar('V'); break;
            case '_': putchar('W'); break;
            case '<': putchar('X'); break;
            case '^': putchar('Y'); break;
            case '?': putchar('Z'); break;
            case '1': putchar(' '); break;
            default: putchar(ch); break;
            }
        }
    }
    printf("\n");
}
