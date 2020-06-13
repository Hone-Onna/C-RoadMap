//
// Created by Shvana on 07/06/2020.
//

#include "stdio.h"

int main(void){
    int your_number;
    /* Take user input first*/

    printf("Enter an integer greater than 47: ");  /* No \n here */
    scanf("%d", &your_number);                     /*note that scanf requires the & */

    /* Decision making statement */
    if (your_number > 47) {                                 /*Beginning of control block */
        printf("The number you entered is %d\n", your_number);
        printf("ASCII value of '%c' = %d\n", your_number, your_number); /*End of control block*/
    } else
        printf("You entered a number less than 48\n");
    return 0;
}


