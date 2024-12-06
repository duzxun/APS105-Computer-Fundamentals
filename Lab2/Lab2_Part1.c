//Lab 2 Part 1: Calculation Programs - Car Rental

//This program calculates the total charge(tax included) for car rentals for a rental period(daily). Every 4th day of rental is free.

//Deniz Uzun



#include <stdio.h>

int main(void) {



    double dailyRate; //define variables

    int rentedDays;



    printf("Enter the daily rate: "); //user can enter daily rate

    scanf_s("%lf", &dailyRate);



    printf("Enter the rental period (in days): "); //user can enter number of days

    scanf_s("%d", &rentedDays);



    double HST = 0.13; //tax



    int freeDays = rentedDays / 4; //calculate and display free days

    printf("Your total free day(s) in this rental is: %d\n", freeDays);



    double totalCharge = (rentedDays - freeDays) * dailyRate * (1 + HST); //calculate and display total charge

    printf("The total charge including taxes is: %.2lf\n", totalCharge);



    return(0);