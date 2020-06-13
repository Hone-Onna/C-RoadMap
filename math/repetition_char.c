//
// Created by Shvana on 07/06/2020.
//
/* Uses repetition to print a character multiple times. */

#include "stdio.h"

int main ( void ){
    int your_number; int counter = 0; char character;

    /* Take user input first */

    printf("Enter the character to repeat: ");
    scanf_s("%c", &character);
    printf("Number of times to repeat '%c'?: ", character);
    scanf_s("%d", &your_number);
    printf("Printing '%c' %d times\n", character, your_number);

    /* Repetitive statement */


    while (counter < your_number) {      /* Beginning of control block*/
        printf("%c", character);
        counter = counter + 1;   /*Adds 1 to current value of counter*/
    }                            /* End of control block*/
    printf("\n");        /*Takes cursor to next line */
    return 0;

}
