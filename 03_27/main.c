#include <stdio.h>
#include <stdlib.h>

// DEITEL KITABINDAN COPY PASTE YAPTIM.
// DONGUNUN RESULT 1 VEYA 2 OLMADIGI DURUMDA BASA SARILMASI ICIN DUZENLENMESI ISTENIYORDU.

int main( void )
{

    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while ( student <= 10 ) {

        printf( "%s", "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );

        if(result == 1 || result == 2){
            ++student;
            if(result == 1){
                ++passes;
            }
            else{
                ++failures;
            }
        }

    }


    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );


    if ( passes > 8 ) {
        puts( "Bonus to instructor!" );
    }
}
