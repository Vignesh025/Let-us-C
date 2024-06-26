/* Call function using an array of function pointers */ 
# include <stdio.h> 

float fun1 ( int, int ) ; 
float fun2 ( int, int ) ; 
float fun3 ( int, int ) ; 
float fun1 ( int i, int j ) 
{ 
    printf ( "In fun1\n" ) ; return 1.0f ; 
} 
float fun2 ( int i, int j ) 
{ 
    printf ( "In fun2\n" ) ; return 2.0f ; 
} 
float fun3 ( int i, int j ) 
{ 
    printf ( "In fun3\n" ) ; return 3.0f ; 
} 
int main( ) 
{ 
    float ( *ptr[ 3 ] ) ( int, int ) ; 
    float f ; int i ; 
    ptr[ 0 ] = fun1 ; ptr[ 1 ] = fun2 ; ptr[ 2 ] = fun3 ; 
    for ( i = 0 ; i < 3 ; i++ ) 
    { 
        f = ( *ptr[ i ] )( 100, i ) ; 
        printf ( "%f\n", f ) ; 
    } 
    return 0 ; 
} 