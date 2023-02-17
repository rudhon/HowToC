#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 0, currow = 0;
    while (row < 8)
    {
        if(row % 2 == 1){
            printf( "%s", " " );
        }
        while(currow < 8){

            printf( "%s", "* " );
            currow++;

        }

        row++;
        currow = 0;
        puts( "" );
    }
    return 0;
}
