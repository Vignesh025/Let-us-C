/* Macros ISUPPER, ISLOWER, ISAPLHA, BIG */ 
# include <stdio.h> 
#define ISUPPER(x) ( x >= 65 && x <= 90 ? 1 : 0 ) 
#define ISLOWER(x) ( x >= 97 && x <= 122 ? 1 : 0 ) 
#define ISALPHA(x) ( ISUPPER(x) || ISLOWER(x) ) 
#define BIG(x,y) ( x > y ? x : y ) 

int main( ) 
{ 
    char ch ; 
    int d, a, b ; 
    printf ( "\nEnter any alphabet/character: " ) ; 
    scanf ( "%c", &ch ) ; 
    if ( ISUPPER ( ch ) == 1 )   
        printf ( "You entered a capital letter\n" ) ; 
    if ( ISLOWER ( ch ) == 1 ) 
        printf ( "You entered a small case letter\n" ) ; 
    if ( ISALPHA ( ch ) != 1 ) 
        printf ( "You entered character other than an alphabet\n" ) ; 
    printf ( "Enter any two numbers: " ) ; 
    scanf ( "%d%d", &a, &b ) ; 
    d = BIG ( a, b ) ;  
    printf ( "Bigger number is %d\n", d ) ; 
    return 0 ; 
} 