#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary = 0, rate = 0, hours = 0;
    printf("Enter the # of hours worked (-1 to end): ");
    scanf("%f",&hours);

    while(hours != -1){

        printf("Enter the hourly rate of the worker ($00.00): ");
        scanf("%f",&rate);

        if(hours <= 40){
            salary = hours * rate;
            printf("Salary is $%.2f\n\n",salary);
        }
        else{
            salary = (40 * rate) + (hours - 40) * (rate * 1.5);
            printf("Salary is $%.2f\n\n",salary);
        }


        printf("Enter the # of hours worked (-1 to end): ");
        scanf("%f",&hours);




    }


    return 0;
}
