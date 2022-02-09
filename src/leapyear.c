
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//
// Created by asbur on 2/7/2022.
//

// •	Part 1: Create a Boolean function to determine if a year passed to the function is a leap year and pass back a Boolean result.
int  leap(int year){
    bool tF;
//    int year,
    int rem_4, rem_100, rem_400;
//    printf("Please enter a year to test: ");
//    scanf("%i", &year);
    if (year >9999 ){
        printf("Bad year\n");
        exit(1);
        return 0;
    }

    else if (year <1 ){
        printf("Bad year\n");
        exit(1);
        return 0;
    }
    rem_4 =year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0) {
        printf("%i A leap year!\n",year);
        tF=true;
    }
    else {
        printf("%i Not a leap year\n",year);
        tF = false;
    }
    return tF;
}







int  leapForPartThree(int year){
    bool tF;
//    int year,
    int rem_4, rem_100, rem_400;
//    printf("Please enter a year to test: ");
//    scanf("%i", &year);
    if (year >9999 ){
      //  printf("Bad year\n");
        exit(1);
        return 0;
    }

    else if (year <1 ){
    //    printf("Bad year\n");
        exit(1);
        return 0;
    }
    rem_4 =year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0) {
    //    printf("%i A leap year!\n",year);
        tF=true;
    }
    else {
     //   printf("%i Not a leap year\n",year);
        tF = false;
    }
    return tF;
}



















int multiplacationT() {


    printf("Multiplication Tables\n");

    //Multiplication Table
    printf("\n");
    printf("\nUp Right Version\n");


    int n = 2;
    int r = 11;
//o	Generate a Boolean table representing all of the years from 1 to 2022.
// Determine which years are leap years and which are not, storing the true/false results in the Boolean table.
//o	Print only the leap years, one century per line.

    for (int x = 0; x <= n; x++) {
        for (int y = 0; y < n; y++) {//ROWS

            printf("%i\t", n);
        }//COLUMNS

        printf("\t\n");

    }// END OF FOR LOOPS
    return 0;
}

