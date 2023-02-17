#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    while (counter <= 500)
    {
        printf("$ ");

        if(counter % 50 == 0){
            puts("");
        }
        ++counter;
    }
    return 0;
}
