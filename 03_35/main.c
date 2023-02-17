#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter = 0;
    int divisor = 10000, remainder, result, sum = 0;
    int multiply = 16;
    printf("Enter the binary number that you want the decimal equivalent of (only 5 digit numbers): ");
    scanf("%d",&num);
    while(counter < 5){
        result = num / divisor;
        num = num % divisor;
        result = result * multiply;
        sum = result + sum;
        multiply = multiply / 2;
        divisor = divisor / 10;
        ++counter;



    }

    printf("Binary equivalent: %d",sum);
    return 0;
}
