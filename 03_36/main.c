#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int first = 1, second = 0, third = 0;
    int num = 100, sum = 0;

    while (num <= 999)
    {
        sum = pow(first,3) + pow(second,3) + pow(third,3);
        if(sum == num){

            printf("%d\n",sum);

        }
        ++num;
        ++third;
        if(third == 10){

            third = 0;
            ++second;

        }
        if(second == 10){

            second = 0;
            ++first;

        }


    }
    return 0;
}
