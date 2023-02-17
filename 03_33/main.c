#include <stdio.h>
#include <stdlib.h>

int main(){

    int row,column, num = 0;
    row = 1;
    column = 2;
    printf("Insert hollow square side size: ");
    scanf("%d", &num);

    while(row <= num){

        printf("*");

        while(column <= num){

            if(row == 1){
                printf("*");
            }
            else if(row == num){
                printf("*");
            }
            else if(column == num){
                printf("*");
            }
            else{
                printf(" ");
            }

            ++column;

        }
        column = 2;
        ++row;
        printf("\n");

    }

    return 0;

}
