// Lab 1: Simple Computations

// This program reads 3 integer numbers and outputs the following: 1)Sum of entries 2)Negating the 1st entry 3)Number after the 2nd entry 4)Product of 2nd and 3rd entries

// Assumption: User enters valid numbers

// Deniz Uzun



#include <stdio.h>



int main(void) {

    int inputNumber1, inputNumber2, inputNumber3, sum, negative, afterNumber, product; //define all variables



    printf("Enter first number: ");

    scanf("%d", &inputNumber1);



    printf("Enter second number: ");

    scanf("%d", &inputNumber2);



    printf("Enter third number: ");

    scanf("%d", &inputNumber3);



    sum = inputNumber1 + inputNumber2 + inputNumber3; //sum of three entries

    printf("Sum: %d\n", sum);



    negative = inputNumber1 * (-1); //multiply 1st entry by -1 to negate

    printf("First Negated: %d\n", negative);



    afterNumber = inputNumber2 + 1; //add one to the second entry to find the next number

    printf("After Number 2: %d\n", afterNumber);



    product = inputNumber2 * inputNumber3;  //product of second and third entries

    printf("Product of Number 2 and Number 3: %d\n", product);



    return(0);

}