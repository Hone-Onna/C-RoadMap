//
// Created by Shvana on 01/06/2020.
//

/* Preprocessor Section  */
#include "stdio.h"        /* printf needs this fi le */
#define PI 3.142          /* PI is a constant */

int main(void )           /* This is where the action begins */
{
    /* Variable declarations */
    int radius = 4;       /* Integer type */
    float area;           /* Floating point type */

    /* Other Statements */
    printf("All numbers are stored in binary\n");
    printf("Radius of circle = %d\n", radius);
    area = PI * radius *radius;
    printf("Area of circle having radius %d = %f\n", radius, area);

    /* The return statement explicitly terminates a program */
    return 0;
}