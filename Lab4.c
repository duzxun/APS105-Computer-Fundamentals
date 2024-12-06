//Lab 4 - Loops and Functions - Interest Charge Computation

//Deniz Uzun



#include<stdio.h>

double owedAmount(double interest, double owedFromPreviousMonth, double purchases, double monthlyPayment) {

    double calculation = owedFromPreviousMonth + purchases + ((owedFromPreviousMonth + purchases) * interest / 1200) - monthlyPayment;

    return(calculation);

}



int main(void) {

    int numberOfMonths;

    double i, u, p, r;



    printf("Enter amount already owed on card: ");

    scanf_s("%lf", &u);



    printf("Enter purchase amount per month: ");

    scanf_s("%lf", &p);



    printf("Enter payment amount per month: ");

    scanf_s("%lf", &r);



    printf("Enter yearly interest rate as percent: ");

    scanf_s("%lf", &i);



    printf("Enter number of months to consider: ");

    scanf_s("%d", &numberOfMonths);



    double totalPurchase = u + p * numberOfMonths;

    printf("Total purchased value: %.2lf", totalPurchase);







    double monthlyInterest, totalInterest = 0;



    if ((u <= 0) && (r < p)) {

        monthlyInterest = (p)*i / 1200;

        totalInterest = totalInterest + monthlyInterest;

        u = owedAmount(i, u, p, r);



    }



    if ((u <= 0) && (r >= p)) {

        totalInterest = 0;



    }



    int loop = 0;



    while ((loop < numberOfMonths) && (u > 0)) {



        monthlyInterest = (u + p) * i / 1200;

        totalInterest = totalInterest + monthlyInterest;

        u = owedAmount(i, u, p, r);

        loop++;

    }

    printf("\nTotal interest charges: %.2lf", totalInterest);







    return(0);

}