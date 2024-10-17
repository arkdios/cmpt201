/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: base2dec.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: Wednesday, October 16th, 2024
#-------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[]){
    //Check for argument counts
    if(argc!=3){
        printf("Invalid Argument Counts.\nRequired 3 Arguments but found %i.\nUsage: ./base2dec <a number> <its base>\n", argc);
        exit(EXIT_FAILURE);
    }

    //Initialize variables
    int base = atoi(argv[2]); //base of the number
    int num = 0; //the number xb
    int y = 0; //the converted number using equation

    //loop to calculate the y = argv[1][0]*base + argv[1][1]*base +...
    for(int i = 0; i < strlen(argv[1]); i++){
        num = 0;

        //Assigning numerical values to letters
        switch(argv[1][i]){
            case('A'):
            num = 10;
            break;

            case('B'):
            num = 11;
            break;

            case('C'):
            num = 12;
            break;

            case('D'):
            num = 13;
            break;

            case('E'):
            num = 14;
            break;
            case('F'):
            num = 15;
            break;

            default:
            num = (int) (argv[1][i] - '0');
        }
        
        y += num*pow(base, strlen(argv[1])-(i+1)); //Calculating by addition after each loop
    }

    //Outputs:
    printf("%i\n", y);
    exit(EXIT_SUCCESS);
}