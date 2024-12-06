//Lab 2 Part 3 - Loan Calculator

//This program calculates the monthly payment M (in dollars) of loan over a fixed term.

//To calculate the monthly payment, the user should enter the followings:

//Purchase price P(in dollars),Down payment D(in dollars),Finance term n(in months),Monthly interest rate r

//Deniz Uzun



#include <stdio.h>

#include <math.h> //math library is needed to perform the power function



int main(void) {

    int P, D, n;

    double r;



    printf("Enter the purchase price P: ");

    scanf_s("%d", &P);



    printf("Enter the amount of down payment D:");

    scanf_s("%d", &D);



    printf("Enter the finance term (in months): ");

    scanf_s("%d", &n);



    printf("Enter the monthly interest rate (in percent): ");

    scanf_s("%lf", &r);



    double M = (P - D) * r / 100 * pow((1 + r / 100), n) / (pow((1 + r / 100), n) - 1); //monthly rate calculation by using the given formula

    printf("The monthly payment is: %.2lf", M); //print the monthly payment rounded to 2 decimal places



    return(0);

}