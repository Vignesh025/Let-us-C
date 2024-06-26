# include <stdio.h> 

void showbits ( unsigned char ) ; 
int main( ) 
{ 
    unsigned char num = 0xAD, j ; 
    printf ( "\nValue of num = " ) ; 
    showbits ( num ) ; 
    j = num & 0x20 ; 
    if ( j == 0 ) 
        printf ( "\nIts fifth bit is off" ) ; 
    else 
        printf ( "\nIts fifth bit is on" ) ; 
    j = num & 0x08 ; 
    if ( j == 0 ) 
        printf ( "\nIts third bit is off" ) ; 
    else 
    { 
        printf ( "\nIts third bit is on" ) ; 
        num = num & 0xF7 ; 
        printf ( "\nNew value of num = " ) ; 
        showbits ( num ) ; 
        j = num & 0x08 ; 
        if ( j == 0 ) 
            printf ( "\nNow its third bit is turned off" ) ; 
    } 
    return 0 ; 
} 
void showbits ( unsigned char n ) 
{ 
    int i ; 
    unsigned char j, k, andmask ; 
    for ( i = 7 ; i >= 0 ; i-- ) 
    { 
        j = i ; 
        andmask = 1 << j ; 
        k = n & andmask ; 
        k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
    } 
} 