# include <stdio.h> 
# include <stdarg.h> 

int findavg ( int, ... ) ; 
int main( ) 
{ 
    int avg ; 
    avg = findavg ( 5, 23, 15, 1, 92, 50 ) ; 
    printf ( "avg = %d\n", avg ) ; 
    avg = findavg ( 3, 100, 30, 29 ) ; 
    printf ( "avg = %d\n", avg ) ; 
    return 0 ; 
} 
int findavg ( int tot_num, ... ) 
{ 
    int avg, i, num, sum ; 
    va_list ptr ; 
    va_start ( ptr, tot_num ) ; 
    sum = 0 ; 
    for ( i = 1 ; i <= tot_num ; i++ ) 
    { 
        num = va_arg ( ptr, int ) ; 
        sum = sum + num ; 
    } 
    return ( sum / tot_num ) ; 
}