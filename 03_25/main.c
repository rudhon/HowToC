#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 7;
    printf("A\tA+3\tA+6\tA+9\n");
    puts("");
    while (num <= 35)
    {
        printf("%d\t%d\t%d\t%d\n",num, num+3, num+6, num*9);
        num += 7;
    }


    return 0;
}
