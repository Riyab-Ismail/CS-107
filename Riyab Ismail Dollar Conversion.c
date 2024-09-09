/*--------------------------------------------
* This program will calulcate the total amount of money we have in dollars after we
* input how many coins we have (nickels, dimes and quarters)
*
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 9th, 2024
--------------------------------------------- */

#include <stdio.h>

int main() {


// Declaring Variables
   int nickels;
   int dimes;
   int quarters;


// Getting user input (number of nickels, dimes and quarters)
   scanf("%d", &nickels);
   scanf("%d", &dimes);
   scanf("%d", &quarters);


// Formula to calculate total dollars (Has to be float (2 decimal values))
   double dollars = nickels * 0.05 + dimes * 0.1 + quarters * 0.25;


// Displaying total amoint of dollars
   printf("Amount: $%.2lf\n", dollars);




   return 0;
}
