//Lab 3 - Computation and Control Flow - Resistor Colour Codes

//This program decodes the resistance of two 4-band resistors.

//Deniz Uzun

#include<stdio.h>



int main(void) {



    char resistor1Band1, resistor1Band2, multiplier1, tolerance1;

    double multiplier1Value, multiplier2Value, tolerance1Value, tolerance2Value;



    printf("Please enter the 1st band of resistor 1: \n");                                                                  //scanning the entries

    scanf_s("%c", &resistor1Band1);



    printf("Please enter the 2nd band of resistor 1: \n");

    scanf_s(" %c", &resistor1Band2);



    printf("Please enter the multiplier band of resistor 1: \n");

    scanf_s(" %c", &multiplier1);



    printf("Please enter the tolerance band of resistor 1: \n");

    scanf_s(" %c", &tolerance1);



    char resistor2Band1, resistor2Band2, multiplier2, tolerance2;

    printf("Please enter the 1st band of resistor 2: \n");

    scanf_s(" %c", &resistor2Band1);



    printf("Please enter the 2nd band of resistor 2: \n");

    scanf_s(" %c", &resistor2Band2);



    printf("Please enter the multiplier band of resistor 2: \n");

    scanf_s(" %c", &multiplier2);



    printf("Please enter the tolerance band of resistor 2: \n");

    scanf_s(" %c", &tolerance2);



    printf("\nColour bands for resistor 1:\n");

    if (resistor1Band1 == 'K' || resistor1Band1 == 'k') {                                                               //if the entry is K or k display Black

        resistor1Band1 = 0;

        printf("Black");

    }

    else if (resistor1Band1 == 'B' || resistor1Band1 == 'b') {

        resistor1Band1 = 1;

        printf("Brown");

    }

    else if (resistor1Band1 == 'R' || resistor1Band1 == 'r') {

        resistor1Band1 = 2;

        printf("Red");

    }

    else if (resistor1Band1 == 'O' || resistor1Band1 == 'o') {

        resistor1Band1 = 3;

        printf("Orange");

    }

    else if (resistor1Band1 == 'E' || resistor1Band1 == 'e') {

        resistor1Band1 = 4;

        printf("Yellow");

    }

    else if (resistor1Band1 == 'G' || resistor1Band1 == 'g') {

        resistor1Band1 = 5;

        printf("Green");

    }

    else if (resistor1Band1 == 'U' || resistor1Band1 == 'u') {

        resistor1Band1 = 6;

        printf("Blue");

    }

    else if (resistor1Band1 == 'V' || resistor1Band1 == 'v') {

        resistor1Band1 = 7;

        printf("Violet");

    }

    else if (resistor1Band1 == 'Y' || resistor1Band1 == 'y') {

        resistor1Band1 = 8;

        printf("Grey");

    }

    else if (resistor1Band1 == 'W' || resistor1Band1 == 'w') {

        resistor1Band1 = 9;

        printf("White");

    }

    else if (!(resistor1Band1 == 'K' || resistor1Band1 == 'k'                                                             //if entry is NOT one of the following display error message

        || resistor1Band1 == 'B' || resistor1Band1 == 'b'

        || resistor1Band1 == 'R' || resistor1Band1 == 'r'

        || resistor1Band1 == 'O' || resistor1Band1 == 'o'

        || resistor1Band1 == 'E' || resistor1Band1 == 'e'

        || resistor1Band1 == 'G' || resistor1Band1 == 'g'

        || resistor1Band1 == 'U' || resistor1Band1 == 'u'

        || resistor1Band1 == 'V' || resistor1Band1 == 'v'

        || resistor1Band1 == 'Y' || resistor1Band1 == 'y'

        || resistor1Band1 == 'W' || resistor1Band1 == 'w')) {

        printf("\nInvalid colour for the 1st band of resistor 1. Exiting the program...\n");

        exit(0);

    }



    if (resistor1Band2 == 'K' || resistor1Band2 == 'k') {

        resistor1Band2 = 0;

        printf(" Black");

    }

    else if (resistor1Band2 == 'B' || resistor1Band2 == 'b') {

        resistor1Band2 = 1;

        printf(" Brown");

    }

    else if (resistor1Band2 == 'R' || resistor1Band2 == 'r') {

        resistor1Band2 = 2;

        printf(" Red");

    }

    else if (resistor1Band2 == 'O' || resistor1Band2 == 'o') {

        resistor1Band2 = 3;

        printf(" Orange");

    }

    else if (resistor1Band2 == 'E' || resistor1Band2 == 'e') {

        resistor1Band2 = 4;

        printf(" Yellow");

    }

    else if (resistor1Band2 == 'G' || resistor1Band2 == 'g') {

        resistor1Band2 = 5;

        printf(" Green");

    }

    else if (resistor1Band2 == 'U' || resistor1Band2 == 'u') {

        resistor1Band2 = 6;

        printf(" Blue");

    }

    else if (resistor1Band2 == 'V' || resistor1Band2 == 'v') {

        resistor1Band2 = 7;

        printf(" Violet");

    }

    else if (resistor1Band2 == 'Y' || resistor1Band2 == 'y') {

        resistor1Band2 = 8;

        printf(" Grey");

    }

    else if (resistor1Band2 == 'W' || resistor1Band2 == 'w') {

        resistor1Band2 = 9;

        printf(" White");

    }

    else if (!(resistor1Band2 == 'K' || resistor1Band2 == 'k'

        || resistor1Band2 == 'B' || resistor1Band2 == 'b'

        || resistor1Band2 == 'R' || resistor1Band2 == 'r'

        || resistor1Band2 == 'O' || resistor1Band2 == 'o'

        || resistor1Band2 == 'E' || resistor1Band2 == 'e'

        || resistor1Band2 == 'G' || resistor1Band2 == 'g'

        || resistor1Band2 == 'U' || resistor1Band2 == 'u'

        || resistor1Band2 == 'V' || resistor1Band2 == 'v'

        || resistor1Band2 == 'Y' || resistor1Band2 == 'y'

        || resistor1Band2 == 'W' || resistor1Band2 == 'w')) {

        printf("\nInvalid colour for the 2nd band of resistor 1. Exiting the program...\n");

        exit(0);

        ;

    }



    if (multiplier1 == 'K' || multiplier1 == 'k') {

        multiplier1Value = 1;                                                                                                   //if multiplier is k or K colour coded set multiplier value to 1

        printf(" Black");

    }

    else if (multiplier1 == 'B' || multiplier1 == 'b') {

        multiplier1Value = 10;

        printf(" Brown");

    }

    else if (multiplier1 == 'R' || multiplier1 == 'r') {

        multiplier1Value = 100;

        printf(" Red");

    }

    else if (multiplier1 == 'O' || multiplier1 == 'o') {

        multiplier1Value = 1000;

        printf(" Orange");

    }

    else if (multiplier1 == 'E' || multiplier1 == 'e') {

        multiplier1Value = 10000;

        printf(" Yellow");

    }

    else if (multiplier1 == 'G' || multiplier1 == 'g') {

        multiplier1Value = 100000;

        printf(" Green");

    }

    else if (multiplier1 == 'U' || multiplier1 == 'u') {

        multiplier1Value = 1000000;

        printf(" Blue");

    }

    else if (multiplier1 == 'V' || multiplier1 == 'v') {

        multiplier1Value = 10000000;

        printf(" Violet");

    }

    else if (multiplier1 == 'L' || multiplier1 == 'l') {

        multiplier1Value = 0.1;

        printf(" Gold");

    }

    else if (multiplier1 == 'S' || multiplier1 == 's') {

        multiplier1Value = 0.01;

        printf(" Silver");

    }

    else if (!(multiplier1 == 'K' || multiplier1 == 'k'

        || multiplier1 == 'B' || multiplier1 == 'b'

        || multiplier1 == 'R' || multiplier1 == 'r'

        || multiplier1 == 'O' || multiplier1 == 'o'

        || multiplier1 == 'E' || multiplier1 == 'e'

        || multiplier1 == 'G' || multiplier1 == 'g'

        || multiplier1 == 'U' || multiplier1 == 'u'

        || multiplier1 == 'V' || multiplier1 == 'v'

        || multiplier1 == 'L' || multiplier1 == 'l'

        || multiplier1 == 'S' || multiplier1 == 's')) {

        printf("\nInvalid colour for the multiplier band of resistor 1. Exiting the program...\n");

        exit(0);

    }



    if (tolerance1 == 'B' || tolerance1 == 'b') {

        tolerance1Value = 1;                                                                                              //if tolerance is k or K colour coded set tolerance value to 1

        printf(" Brown");

    }

    else if (tolerance1 == 'R' || tolerance1 == 'r') {

        tolerance1Value = 2;

        printf(" Red");

    }

    else if (tolerance1 == 'G' || tolerance1 == 'g') {

        tolerance1Value = 0.5;

        printf(" Green");

    }

    else if (tolerance1 == 'U' || tolerance1 == 'u') {

        tolerance1Value = 0.25;

        printf(" Blue");

    }

    else if (tolerance1 == 'V' || tolerance1 == 'v') {

        tolerance1Value = 0.10;

        printf(" Violet");

    }

    else if (tolerance1 == 'Y' || tolerance1 == 'y') {

        tolerance1Value = 0.05;

        printf(" Grey");

    }

    else if (tolerance1 == 'L' || tolerance1 == 'l') {

        tolerance1Value = 5;

        printf(" Gold");

    }

    else if (tolerance1 == 'S' || tolerance1 == 's') {

        tolerance1Value = 10;

        printf(" Silver");

    }

    else if (!(tolerance1 == 'B' || tolerance1 == 'b'

        || tolerance1 == 'R' || tolerance1 == 'r'

        || tolerance1 == 'G' || tolerance1 == 'g'

        || tolerance1 == 'U' || tolerance1 == 'u'

        || tolerance1 == 'V' || tolerance1 == 'v'

        || tolerance1 == 'Y' || tolerance1 == 'y'

        || tolerance1 == 'L' || tolerance1 == 'l'

        || tolerance1 == 'S' || tolerance1 == 's')) {

        printf("\nInvalid colour for the tolerance band of resistor 1. Exiting the program...\n");

        exit(0);

    }



    printf("\nColour bands for resistor 2:\n");

    if (resistor2Band1 == 'K' || resistor2Band1 == 'k') {

        resistor2Band1 = 0;

        printf("Black");

    }

    else if (resistor2Band1 == 'B' || resistor2Band1 == 'b') {

        resistor2Band1 = 1;

        printf("Brown");

    }

    else if (resistor2Band1 == 'R' || resistor2Band1 == 'r') {

        resistor2Band1 = 2;

        printf("Red");

    }

    else if (resistor2Band1 == 'O' || resistor2Band1 == 'o') {

        resistor2Band1 = 3;

        printf("Orange");

    }

    else if (resistor2Band1 == 'E' || resistor2Band1 == 'e') {

        resistor2Band1 = 4;

        printf("Yellow");

    }

    else if (resistor2Band1 == 'G' || resistor2Band1 == 'g') {

        resistor2Band1 = 5;

        printf("Green");

    }

    else if (resistor2Band1 == 'U' || resistor2Band1 == 'u') {

        resistor2Band1 = 6;

        printf("Blue");

    }

    else if (resistor2Band1 == 'V' || resistor2Band1 == 'v') {

        resistor2Band1 = 7;

        printf("Violet");

    }

    else if (resistor2Band1 == 'Y' || resistor2Band1 == 'y') {

        resistor2Band1 = 8;

        printf("Grey");

    }

    else if (resistor2Band1 == 'W' || resistor2Band1 == 'w') {

        resistor2Band1 = 9;

        printf("White");

    }

    else if (!(resistor2Band1 == 'K' || resistor2Band1 == 'k'

        || resistor2Band1 == 'B' || resistor2Band1 == 'b'

        || resistor2Band1 == 'R' || resistor2Band1 == 'r'

        || resistor2Band1 == 'O' || resistor2Band1 == 'o'

        || resistor2Band1 == 'E' || resistor2Band1 == 'e'

        || resistor2Band1 == 'G' || resistor2Band1 == 'g'

        || resistor2Band1 == 'U' || resistor2Band1 == 'u'

        || resistor2Band1 == 'V' || resistor2Band1 == 'v'

        || resistor2Band1 == 'Y' || resistor2Band1 == 'y'

        || resistor2Band1 == 'W' || resistor2Band1 == 'w')) {

        printf("\nInvalid colour for the 1st band of resistor 2. Exiting the program...\n");

        exit(0);

    }



    if (resistor2Band2 == 'K' || resistor2Band2 == 'k') {

        resistor2Band2 = 0;

        printf(" Black");

    }

    else if (resistor2Band2 == 'B' || resistor2Band2 == 'b') {

        resistor2Band2 = 1;

        printf(" Brown");

    }

    else if (resistor2Band2 == 'R' || resistor2Band2 == 'r') {

        resistor2Band2 = 2;

        printf(" Red");

    }

    else if (resistor2Band2 == 'O' || resistor2Band2 == 'o') {

        resistor2Band2 = 3;

        printf(" Orange");

    }

    else if (resistor2Band2 == 'E' || resistor2Band2 == 'e') {

        resistor2Band2 = 4;

        printf(" Yellow");

    }

    else if (resistor2Band2 == 'G' || resistor2Band2 == 'g') {

        resistor2Band2 = 5;

        printf(" Green");

    }

    else if (resistor2Band2 == 'U' || resistor2Band2 == 'u') {

        resistor2Band2 = 6;

        printf(" Blue");

    }

    else if (resistor2Band2 == 'V' || resistor2Band2 == 'v') {

        resistor2Band2 = 7;

        printf(" Violet");

    }

    else if (resistor2Band2 == 'Y' || resistor2Band2 == 'y') {

        resistor2Band2 = 8;

        printf(" Grey");

    }

    else if (resistor2Band2 == 'W' || resistor2Band2 == 'w') {

        resistor2Band2 = 9;

        printf(" White");

    }

    else if (!(resistor2Band2 == 'K' || resistor2Band2 == 'k'

        || resistor2Band2 == 'B' || resistor2Band2 == 'b'

        || resistor2Band2 == 'R' || resistor2Band2 == 'r'

        || resistor2Band2 == 'O' || resistor2Band2 == 'o'

        || resistor2Band2 == 'E' || resistor2Band2 == 'e'

        || resistor2Band2 == 'G' || resistor2Band2 == 'g'

        || resistor2Band2 == 'U' || resistor2Band2 == 'u'

        || resistor2Band2 == 'V' || resistor2Band2 == 'v'

        || resistor2Band2 == 'Y' || resistor2Band2 == 'y'

        || resistor2Band2 == 'W' || resistor2Band2 == 'w')) {

        printf("\nInvalid colour for the 2nd band of resistor 2. Exiting the program...\n");

        exit(0);

        ;

    }



    if (multiplier2 == 'K' || multiplier2 == 'k') {

        multiplier2Value = 1;

        printf(" Black");

    }

    else if (multiplier2 == 'B' || multiplier2 == 'b') {

        multiplier2Value = 10;

        printf(" Brown");

    }

    else if (multiplier2 == 'R' || multiplier2 == 'r') {

        multiplier2Value = 100;

        printf(" Red");

    }

    else if (multiplier2 == 'O' || multiplier2 == 'o') {

        multiplier2Value = 1000;

        printf(" Orange");

    }

    else if (multiplier2 == 'E' || multiplier2 == 'e') {

        multiplier2Value = 10000;

        printf(" Yellow");

    }

    else if (multiplier2 == 'G' || multiplier2 == 'g') {

        multiplier2Value = 100000;

        printf(" Green");

    }

    else if (multiplier2 == 'U' || multiplier2 == 'u') {

        multiplier2Value = 1000000;

        printf(" Blue");

    }

    else if (multiplier2 == 'V' || multiplier2 == 'v') {

        multiplier2Value = 10000000;

        printf(" Violet");

    }

    else if (multiplier2 == 'L' || multiplier2 == 'l') {

        multiplier2Value = 0.1;

        printf(" Gold");

    }

    else if (multiplier2 == 'S' || multiplier2 == 's') {

        multiplier2Value = 0.01;

        printf(" Silver");

    }

    else if (!(multiplier2 == 'K' || multiplier2 == 'k'

        || multiplier2 == 'B' || multiplier2 == 'b'

        || multiplier2 == 'R' || multiplier2 == 'r'

        || multiplier2 == 'O' || multiplier2 == 'o'

        || multiplier2 == 'E' || multiplier2 == 'e'

        || multiplier2 == 'G' || multiplier2 == 'g'

        || multiplier2 == 'U' || multiplier2 == 'u'

        || multiplier2 == 'V' || multiplier2 == 'v'

        || multiplier2 == 'L' || multiplier2 == 'l'

        || multiplier2 == 'S' || multiplier2 == 's')) {

        printf("\nInvalid colour for the multiplier band of resistor 2. Exiting the program...\n");

        exit(0);

    }



    if (tolerance2 == 'B' || tolerance2 == 'b') {

        tolerance2Value = 1;

        printf(" Brown");

    }

    else if (tolerance2 == 'R' || tolerance2 == 'r') {

        tolerance2Value = 2;

        printf(" Red");

    }

    else if (tolerance2 == 'G' || tolerance2 == 'g') {

        tolerance2Value = 0.5;

        printf(" Green");

    }

    else if (tolerance2 == 'U' || tolerance2 == 'u') {

        tolerance2Value = 0.25;

        printf(" Blue");

    }

    else if (tolerance2 == 'V' || tolerance2 == 'v') {

        tolerance2Value = 0.10;

        printf(" Violet");

    }

    else if (tolerance2 == 'Y' || tolerance2 == 'y') {

        tolerance2Value = 0.05;

        printf(" Grey");

    }

    else if (tolerance2 == 'L' || tolerance2 == 'l') {

        tolerance2Value = 5;

        printf(" Gold");

    }

    else if (tolerance2 == 'S' || tolerance2 == 's') {

        tolerance2Value = 10;

        printf(" Silver");

    }

    else if (!(tolerance2 == 'B' || tolerance2 == 'b'

        || tolerance2 == 'R' || tolerance2 == 'r'

        || tolerance2 == 'G' || tolerance2 == 'g'

        || tolerance2 == 'U' || tolerance2 == 'u'

        || tolerance2 == 'V' || tolerance2 == 'v'

        || tolerance2 == 'Y' || tolerance2 == 'y'

        || tolerance2 == 'L' || tolerance2 == 'l'

        || tolerance2 == 'S' || tolerance2 == 's')) {

        printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...\n");

        exit(0);

    }



    double value1 = (resistor1Band1 * 10 + resistor1Band2) * multiplier1Value;                                                                  //calculate the resistance

    if (value1 < 1000) {

        printf("\nValue in ohms of resistor 1:\n%.2lf Ohms +/- %.2lf%%", value1, tolerance1Value);

    }

    else if (value1 >= 1000 && value1 < 1000000) {                                                                                               //if the value is in between 1000-1000000 divide by 1000 to convert to KOhms

        printf("\nValue in ohms of resistor 1:\n%.2lf KOhms +/- %.2lf%%", value1 / 1000, tolerance1Value);

    }

    else if (value1 >= 1000000) {                                                                                                              //if the value is over 1000000 divide by 1000000 to convert to MOhms

        printf("\nValue in ohms of resistor 1:\n%.2lf MOhms +/- %.2lf%%", value1 / 1000000, tolerance1Value);

    }



    double value2 = (resistor2Band1 * 10 + resistor2Band2) * multiplier2Value;

    if (value2 < 1000) {

        printf("\nValue in ohms of resistor 2:\n%.2lf Ohms +/- %.2lf%%", value2, tolerance2Value);

    }

    else if (value2 >= 1000 && value2 < 1000000) {

        printf("\nValue in ohms of resistor 2:\n%.2lf KOhms +/- %.2lf%%", value2 / 1000, tolerance2Value);

    }

    else if (value2 >= 1000000) {

        printf("\nValue in ohms of resistor 2:\n%.2lf MOhms +/- %.2lf%%", value2 / 1000000, tolerance2Value);

    }



    double series = value1 + value2;

    if (series < 1000) {

        printf("\n\nThe Equivalent in series is %.2lf Ohms", series);

    }

    else if (series >= 1000 && series < 1000000) {

        printf("\n\nThe Equivalent in series is %.2lf KOhms", series / 1000);

    }

    else if (series >= 1000000) {

        printf("\n\nThe Equivalent in series is %.2lf MOhms", series / 1000000);

    }



    double parallel = value1 * value2 / (value1 + value2);

    if (parallel < 1000) {

        printf("\nThe Equivalent in series is %.2lf Ohms\n", parallel);

    }

    else if (parallel >= 1000 && parallel < 1000000) {

        printf("\nThe Equivalent in series is %.2lf KOhms\n", parallel / 1000);

    }

    else if (parallel >= 1000000) {

        printf("\nThe Equivalent in series is %.2lf MOhms\n", parallel / 1000000);

    }

    return (0);

}