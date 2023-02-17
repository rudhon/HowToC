#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Enter the sides of the triangle (nonzero) : ");
    scanf("%d %d %d",&x,&y,&z);
    while(x && (y && z) > 0){

        if( (x + y > z) && (z > x - y)){
            if( x * x + y * y == z*z ){

                printf("Entered integers represents a right triangle.\n\n");

            }
        }
        else{

            printf("Entered integers doesnt represent a right triangle.\n\n");

        }

        printf("Enter the sides of the triangle (nonzero) : ");
        scanf("%d %d %d",&x,&y,&z);
    }

    return 0;
}
