#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 2;
    int indicator = 0;
    printf("Enter a number to check if number is prime: ");
    scanf("%d",&num);



    while(num != -1){

        while(i < num){

            if(num % i == 0){
                printf("Entered number is not prime.\n");
                indicator = -1;
                i = num;
                }

        ++i;

        }
        if(num == 1){
                printf("Entered number is not prime.\n");
                indicator = -1;
        }
        if(indicator == 0){
            printf("Entered number is prime.\n");
        }

        i = 2;
        printf("\nEnter a number to check if number is prime: ");
        scanf("%d",&num);
        indicator = 0;
    }


    return 0;
}
