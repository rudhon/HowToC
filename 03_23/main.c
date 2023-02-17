#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1, number, largest = 0;

    while (count < 11)
    {
        printf("Enter the %d. number: ", count);
        scanf("%d",&number);
        if(number > largest){
            largest = number;
        }
        ++count;
    }
    printf("\nLargest number is %d\n",largest);
    return 0;
}
