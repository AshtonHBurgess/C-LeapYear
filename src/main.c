// Assignment #2 - Starter Files
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../inc/leapyear.h"


    // YOUR CODE HERE - DO NOT FORGET TO CREATE SOURCE AND HEADER FILES FOR LEAP YEAR FUNCTION


/*


 * Also, return a message of "Bad year" if a year between 1 and 9999 not entered and return 1 error code.
 * Return a message of "Bad month" if a month between 1 and 12 not entered and return 1 error code.
 *
 * NOTE: This would be a great job for a switch-case statement!!
 * REMINDER: "30 days has September, April, June, and November".
 */

// ADD NEW FUNCTIONS HERE


int getTheYear(){
    bool mybool = false;

    while(mybool == false) {

        int year;
        char str[10];
        printf("Enter year: ");
        scanf("%s", str);

        if (str[0] == 'N') {
            printf("Quitting..\n");
            mybool=true;
            return 0;
        }

        else if (str[0] != 'N') {

            for (int i = 0; str[i]; i++) {
                if (str[i] == '.') {
                    printf("its a float\n");
                    mybool=false;
                    getTheYear();
                    break;

                    //return 0;
                }//inner if
            }//for loop

            year = atoi(str);
            if (year > 0) {
                //  printf("Valid Input as integer : %i\n", year);
                //  year += 9;
                //  printf("Valid Input as integer : %i\n", year);
                mybool= true;
                leap(year);
                // return year;
            } else
                printf("Sorry that input is invalid..\n");

            mybool= false;
            //return 0;
        }//elif

    }//while loop


}// get the year





//PART 3
int partThree(){
    printf("\nTHE LEAP YEAR PER CENTURY REPORT\n");
    int minY=0;
    int maxY=2022;
    int cent = 100;
    bool isleap;
    for(int i =0;minY <maxY; i++) {

        printf("\nCentury %i:\t",i +1);

        for (int x = 0; x < 100; x++) {

            if (minY <= maxY) {
                minY++;

                isleap =leapForPartThree(minY);
                if(isleap == true) {
                    printf("%i\t", minY);
                }
            }


        }//END OF INNER LOOP
        printf("\n");


    }// END OF OUTER LOOP

    return 0;
}


//ASSIGNMENT 1  multiplacation table








int main() {

    getTheYear();

    partThree();

      //  multiplacationT();
    return 0;
}




