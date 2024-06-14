#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *names[] = {
        "John F Kenedy", "George", "Narendra NAmo Modi ji", "Lionel Andres Messi"
    };
    int i = 0, j = 0;
    int numNames = sizeof(names) / sizeof(char*);  

   
    while (i < numNames) {
        printf("\n%s", names[i]);
        i++;
    }

    char f[5][50];  
    char temp[50]; 

    for (j = 0; j < numNames; j++) {
        strcpy(temp, ""); 

        char *s = strchr(names[j], ' ');  
        if (s == NULL) {
           
            strcpy(temp, names[j]);
        } else {
            
            strncat(temp, names[j], 1);

            s++;  
            while (*s != '\0') {
                char *nextSpace = strchr(s, ' ');  
                if (nextSpace != NULL) {
                    strncat(temp, " ", 1);  
                    strncat(temp, s, 1);   
                    s = nextSpace + 1;      
                } else {
                    strcat(temp, " ");      
                    strcat(temp, s);        
                    break;
                }
            }
        }
        strcpy(f[j], temp);  
    }

    i = 0;
    while (i < numNames) {
        printf("\n%s", f[i]);
        i++;
    }

    return 0;
}