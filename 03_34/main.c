#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, column = 0, currow = 0, number = 1;
    printf("Enter the number of raws of Floyd's triangle to print: ");
    scanf("%d",&row);
    while(currow < row){

        while(column <= currow){
            printf("%d ",number);
            ++number;
            ++column;

        }
    ++currow;
    column = 0;
    printf("\n");
    }

    return 0;
}
