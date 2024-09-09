/*--------------------------------------------
* This program will give us the gas cost to drive a car 20,75 and 500 miles, given the car's gas
* mileage and the cost of gas.
*
*
* Class: CS 107, Fall 2024
* Author: Riyab Ismail
* Date: September 5th, 2024
--------------------------------------------- */



#include <stdio.h>

int main(void) {


// Declaring Variables
double carGasMileage;
double gasCost;
double totalCost20Miles;
double totalCost75Miles;
double totalCost500Miles;


// Getting user input for their car's gas mileage and the current cost of gas
scanf("%lf", &carGasMileage);
scanf("%lf", &gasCost);  


// Math fucntions to calculate the total trip cost for 20, 75 and 500 miles
totalCost20Miles = (20 / (carGasMileage)) * gasCost;
totalCost75Miles = (75 / (carGasMileage)) * gasCost;
totalCost500Miles = (500 / (carGasMileage)) * gasCost;


// Displaying the calculated costs
printf("%.2lf ", totalCost20Miles);
printf("%.2lf ", totalCost75Miles);
printf("%.2lf\n", totalCost500Miles);

   return 0;
}
