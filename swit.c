# include <stdio.h>
int main( )

{
    char ch,ab ;
    printf ( "Enter any one of the alphabets a, b, or c " ) ;
    scanf ( "%c", &ch ) ;
    switch ( ch ) 
    {
        case 'a' :
        case 'A' :
            printf ( "a as in ashar\n" ) ;
            switch(ch){
                case 'a':
                printf("this is a");
                break;
                case 'A':
                printf("this is A");    
                break;
            }
            break ;
        case 'b' :
        case 'B' :
            printf ( "b as in brain\n" ) ;
            break ;
        case 'c' :
        case 'C' :
            printf ( "c as in cookie\n" ) ;
            break ;
        default :
            printf ( "wish you knew what are alphabets\n" ) ;
        return 0 ;
    }
}