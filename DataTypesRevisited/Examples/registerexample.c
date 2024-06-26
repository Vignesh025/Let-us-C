/*A value stored in a CPU register is accessed faster than the one that is 
stored in memory.*/


#include<stdio.h>

int main()
{
    register int  i ; 
    for ( i = 1 ; i <= 10 ; i++ ) 
        printf ( "%d\n", i ) ; 
}