# include <stdio.h> 

float power ( float, int ) ; 
int main( ) 
{ 
    float  x, pow ; 
    int  y ;
    printf ( "\nEnter two numbers: " ) ; 
    scanf ( "%f %d", &x, &y ) ; 
    pow = power ( x , y ) ;   
    printf ( "%f to the power %d = %f\n", x, y, pow ) ; 
    return 0 ; 
} 
float power ( float x, int y ) 
{ 
    int  i ;
    float  p = 1 ; 
    for ( i = 1 ; i <= y ; i++ ) 
        p = p * x ; 
    return ( p ) ; 
} 