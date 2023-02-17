#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("N\tN2\tN3\tN4\n");
    int count = 0;
    while(count <= 10){

        printf("%d\t%d\t%d\t%d\n",count,count*count,count*count*count,count*count*count*count);
        ++count;
    }
}
