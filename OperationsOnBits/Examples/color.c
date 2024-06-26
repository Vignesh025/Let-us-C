/* To determine the color */ 
# include <stdio.h> 
# define _BV(x) ( 1 << x ) 

void showbits ( unsigned char n ); 
int main( ) 
{ 
    unsigned char color, i ; 
    int c ; 
    char *rbcolors[ ] = { "Violet", "Indigo", "Blue", "Green", 
    "Yellow", "Orange", "Red" } ; 
    printf ( "\nEnter any number: " ) ; 
    scanf ( "%d", &c ) ; 
    color = ( unsigned char ) c ; 
    printf ( "Colors represented are:\n" ) ; 
    for ( i = 0 ; i <= 6 ; i++ ) 
    { 
        if ( ( color & _BV ( i ) ) == _BV ( i ) ) 
            printf ( "%s\n", rbcolors[ i ] ) ; 
    } 
    return 0 ; 
}