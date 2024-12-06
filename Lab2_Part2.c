//Lab 2 Part 2 - Deciphering Code

//This program takes a 4-digit number and encodes/decodes it by performing the following operations: Swaps the 1st and 4th digit. Replaces 2nd and 3rd digits by their 9's component.

//Let a,b,c,d be positive numbers from 0 to 9. The code entered is abcd. The real code or the code encrypted (the output) will be d(9-b)(9-c)a.

//Assumption: Entered combination is a valid 4-digit number.

//Deniz Uzun



#include<stdio.h>

int main(void) {

    int lockCode;

    printf("Enter an encrypted 4-digit combination: ");

    scanf_s("%d", &lockCode);



    int firstDigit = (lockCode - lockCode % 1000) / 1000; // Modulo operation gives last 3 digits.(0bcd)

                                                       //Substarcting it from the code makes rest of the digits other than the first become 0 (abcd-0bcd=a000)

                                                                   //Divide it by 1000 to find the first digit.(a000)/1000=a





    int secondDigit = (lockCode - lockCode % 100) / 100 - firstDigit * 10; //Similar to the first digit.

                                                                 //(abcd-cd=ab00) (ab00/100=ab) (ab-a0=b)



    int thirdDigit = (lockCode - lockCode % 10) / 10 - firstDigit * 100 - secondDigit * 10; //Similar to the first and second digits.

                                                                                        //(abcd-d=abc0) (abc0/10=abc) (abc-ab0=c)





    int lastDigit = (lockCode % 10); //Modulo divided by 10 returns its last digit (d)



    printf("The real number is: %d%d%d%d", lastDigit, 9 - secondDigit, 9 - thirdDigit, firstDigit); //d(9-b)(9-c)a



    return(0);

}