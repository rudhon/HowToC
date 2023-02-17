#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    printf("Enter the side size of the square: ");
    scanf("%d",&num);
    int inside = 1, outside = 1;
    while(inside <= num){

            printf("*");


        while(outside < num){
            ++outside;
            printf("*");

        }
        puts("");
        outside = 1;
        ++inside;
    }


}
