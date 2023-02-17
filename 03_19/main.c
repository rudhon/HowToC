#include <stdio.h>
#include <stdlib.h>

int main()
{
    float interest = 0, rate = 0, principal = 0, days = 0;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f",&principal);

    while( principal != -1){
        printf("Enter interest rate: ");
        scanf("%f",&rate);
        printf("Enter term of the loan in days: ");
        scanf("%f",&days);
        interest = days * principal * rate / 365;
        printf("The interest charge is: $%.2f\n", interest);
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%f",&principal);
    }

    return 0;
}
