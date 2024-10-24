/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: sec.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: Thursday, October 24th, 2024
#-------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int sec2hms(double*, int*, int*, int*);

int main(void){
    double totalsec[5] = {-4000, 7000, 13500};
    int hr, min, sec;
    int ret;

    //Test case 1:
    ret = sec2hms(&totalsec[0], &hr, &min, &sec);
    if(ret == 1){
            printf("The function did not work.\n");
    }
    else{
            printf("totalSec= %.0f         hr= %i        min= %i       sec= %i\n", totalsec[0], hr, min, sec);
    }

    //reset
    hr = 0;
    min = 0;
    sec = 0;

    //Test case 2:
    ret = sec2hms(&totalsec[1], &hr, &min, &sec);
    if(ret == 1){
            printf("The function did not work.\n");
    }
    else{
            printf("totalSec= %.0f         hr= %i        min= %i       sec= %i\n", totalsec[1], hr, min, sec);
    }

    //reset
    hr = 0;
    min = 0;
    sec = 0;

    //Test case 3:
    ret = sec2hms(&totalsec[2], &hr, &min, &sec);
    if(ret == 1){
            printf("The function did not work.\n");
    }
    else{
            printf("totalSec= %.0f         hr= %i        min= %i       sec= %i\n", totalsec[2], hr, min, sec);
    }

    return 0;
}

int sec2hms(double* totalsec, int* hr, int* min, int* sec){
    double total = *totalsec; //temporary holder as one cannot use the pointer directly sometimes
    
    if(total < 0){
        return 1; //failure
    }

    //for cases when the total secs cannot make up a minute
    else if(total< 60 && total >= 0){
        *hr = 0;
        *min = 0;
        *sec = total;
    }

    //for cases when the total secs cannot make up an hour
    else if(total < 3600 && total > 60){
        *hr = 0;
        double x = *min; //minute temporary holder
        total = total/60; //for better view instead of a cluster
        *sec = modf(total, &x)*60;
        *min = x;
    }
    
    //default case
    else if(total >= 3600){
        double x1 = *min; //minute holder 1
        double x2 = *min; //minute holder 2
        double y = *hr; //hour holder
        
        total = total/3600; //for better view instead of a cluster
        x1 = modf(total, &y)*60;
        *sec = modf(x1, &x2)*60;
        *hr = y;
        *min = x2;
    }

    return 0;
}