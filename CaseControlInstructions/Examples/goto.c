# include <stdio.h> 
# include <stdlib.h> 

int main( ) 
{ 
    int  goals;
    printf ( "Enter the number of goals scored against India" ) ; 
    scanf ( "%d", &goals ) ; 
    if ( goals <= 5 ) 
        goto sos ; 
    else
    {
        printf ( "About time soccer players learnt C\n" ) ; 
        printf ( "and said goodbye to soccer\n" ) ; 
        exit ( 1 ) ;  /* terminates program execution */ 
    }
    sos :
        printf ( "To err is human!\n" ) ; 
    return 0 ; 
}
