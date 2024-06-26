/* Reverse strings stored in an array of pointers */ 
# include <stdio.h> 
# include <string.h> 

void xstrrev ( char *ss ) ; 
int main( ) 
{ 
    char str[ ][ 35 ] = { 
                            "To ere is human...", 
                            "But to really mess things up...", 
                            "One needs to know C !!" 
                        } ; 
    int i ; 
    for ( i = 0 ; i <= 2 ; i++ ) 
    { 
        xstrrev ( str[ i ] ) ; 
        printf ( "%s\n", str[ i ] ) ; 
    }
    return 0 ; 
} 
void xstrrev ( char *s ) 
{ 
    int l, i ; 
    char *t, temp ; 
    l = strlen ( s ) ; 
    t = s + l - 1 ; 
    for ( i = 1 ; i <= l / 2 ; i++ ) 
    { 
        temp = *s ; *s = *t ; *t = temp ; 
        s++ ; t-- ; 
    } 
} 