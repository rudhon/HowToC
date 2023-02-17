#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largest = 0, second = 0, number, count = 1;

    while (count <= 10)
    {
        printf("Insert %d. number: ", count);
        scanf("%d",&number);
        if(number > largest){
            second = largest;
            largest = number;

        }
        ++count;
    }
    printf("\nLargest number is %d\n",largest);
    printf("Second largest number is %d\n",second);
    return 0;
}
