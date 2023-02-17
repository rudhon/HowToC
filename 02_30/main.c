#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*starting number ... */
    int number;

    /*... and (its) digits number */
    int one, two, thr, fou, fiv;

    printf("Enter a five digits number: ");
    scanf("%d", &number);

    one = number / 10000;
    two = (number / 1000) % 10;
    thr = ((number / 100) % 100) % 10;
    fou = (((number / 10) % 1000) % 100) % 10;
    fiv = number % 10;

    printf("%d %d %d %d %d\n", one, two, thr, fou, fiv);
}
