/* Demonstration of passing an array to a function */ 
# include <stdio.h> 

void display1 ( int *, int ) ; 
void display2 ( int [ ], int ) ; 
int main( ) 
{ 
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    display1 ( &num[ 0 ], 6 ) ; 
    display2 ( &num[ 0 ], 6 ) ; 
    return 0 ; 
} 
void display1 ( int *ptr, int n ) 
{ 
    int i ; 
    for ( i = 0 ; i <= n - 1 ; i++ ) 
    { 
        printf ( "element = %d\n", *ptr ) ; 
        ptr++ ; /* increment pointer to point to next element */ 
    } 
} 
void display2 ( int ptr[ ], int n ) 
{ 
    int i ; 
    for ( i = 0 ; i <= n - 1 ; i++ ) 
        printf ( "element = %d\n", ptr[ i ] ) ; 
}