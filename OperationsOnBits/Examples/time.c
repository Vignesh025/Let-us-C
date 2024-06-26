/* Program to display hour, minute, and seconds */ 
# include <stdio.h> 

void display ( unsigned short int time ) ; 
int main( ) 
{ 
    unsigned short int time ; 
    puts ( "Enter any number less than 24446: " ) ; 
    scanf ( "%hu", &time ) ; 
    display ( time ) ; 
    return 0 ; 
} 
void display ( unsigned short int tm ) 
{ 
    unsigned short int hours, minutes, seconds, temp ; 
    hours = tm >> 11 ; 
    temp = tm << 5 ; 
    minutes = temp >> 10 ; 
    temp = tm << 11 ; 
    seconds = ( temp >> 11 ) * 2 ; 
    printf ( "For Time = %hu\n", tm ) ; 
    printf ( "Hours = %hu\n", hours ) ; 
    printf ( "Minutes = %hu\n", minutes ) ; 
    printf ( "Seconds = %hu\n", seconds ) ; 
}