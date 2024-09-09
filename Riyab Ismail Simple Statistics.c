/*--------------------------------------------
* This program calculates the average and product of 4 integers.
* It will also output the same in floating point form.
*
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 6th, 2024
--------------------------------------------- */


#include <stdio.h>

int main(void) {
    


// Declaring Variables
   int userNum1;
   int userNum2;
   int userNum3;
   int userNum4;
   double product;
   double product1;
   int average;
   double average1;


// Getting user input 
    scanf("%d", &userNum1);
    scanf("%d", &userNum2);
    scanf("%d", &userNum3);
    scanf("%d", &userNum4);

// Declaring Mathematical functions to determine product and average of user input. (in integer and decimal)
    product = userNum1 * userNum2 * userNum3 * userNum4;
    product1 = (double)userNum1 * userNum2 * userNum3 * userNum4;
    average = (userNum1 + userNum2 + userNum3 + userNum4) / 4;
    average1 = (double) (userNum1 + userNum2 + userNum3 + userNum4) / 4.0;


// Displaying product and average of user input. (in integer and decimal)
    printf("%.0lf %d\n",product, average);
    printf("%.3lf %.3lf\n",product1, average1);    



   return 0;
}
