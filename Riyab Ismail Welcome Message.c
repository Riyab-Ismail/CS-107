/*--------------------------------------------
* This program take the user's name as a string input and then displays a personal 
* welcome message for the user.
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 9th, 2024
--------------------------------------------- */

#include <stdio.h>

int main(void) {
 
// Declaring variables
   char userName[50];

// Getting user's name (string input)
   scanf("%s", userName);

// Displaying personal welcome message 
   printf("Hey %s!\n", userName);
   printf("Welcome to zyBooks!\n");

   return 0;
}
