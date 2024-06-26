/* Program to copy one array into another in reverse order */ 
# include <stdio.h> 

int main( ) 
{ 
    int arr1[ 5 ], arr2[ 5 ], i, j ; 
    printf ( "\nEnter 5 elements of array:\n" ) ; 
    for ( i = 0 ; i <= 4 ; i++ ) 
        scanf ( "%d", &arr1[ i ] ) ; 
    for ( i = 0, j = 4 ; i <= 4 ; i++, j-- ) 
        arr2[ j ] = arr1[ i ] ; 
    printf ( "Elements in reverse order:\n" ) ; 
    for ( i = 0 ; i <= 4 ; i++ ) 
        printf ( "%d\t", arr2[ i ] ) ; 
    return 0 ; 
} 