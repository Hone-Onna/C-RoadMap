//
// Created by Shvana on 13/06/2020.
//
/* A simple interest calculator using a function */

#include "stdio.h"

/* Function declaration or prototype */
float calc_interest(int principal, float interest_rate, int years);

int main(void ){
    float amount;

    /* Use calc interest function*/
    amount = calc_interest(100, 6, 2);
    printf("Interest on 100 for 2 years = %f\n", amount);
    amount = calc_interest(200, 6, 3);
    printf("Interest on 300 for 3 years = %.2f\n", amount);

    return 0;
}

/* Function definition*/
float calc_interest(int principal, float interest_rate, int years){
    float interest_amount;
    interest_amount = principal * (interest_rate /100) * years;
    return interest_amount;
}
