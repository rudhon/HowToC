#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, remainder, counter0 = 0, counter1 = 0;
    printf("Enter the integer that you want to count the 9's( 5 digits or fewer): ");
    scanf("%d",&num);
    while(counter0 < 5){
        remainder = num % 10;
        num = num / 10;
        if(remainder == 9){
            counter1++;
        }

        ++counter0;
    }
    printf("The 9's counted in the entered number is: %d\n",counter1);
    return 0;
}
