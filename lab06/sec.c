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
# date: day, October th, 2024
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

    for(int i=0; i < 3; i++){
        ret = sec2hms(&totalsec[i], &hr, &min, &sec);
        if(ret == 1){
            printf("The function did not work.\n");
            //printf("totalSec= %.0f         hr= %i        min= %i       sec= %i\n", totalsec[i], hr, min, sec);
        }
        else{
            printf("totalSec= %.0f         hr= %i        min= %i       sec= %i\n", totalsec[i], hr, min, sec);
        }
    }
    return 0;
}

int sec2hms(double* totalsec, int* hr, int* min, int* sec){
    int total = *totalsec;
    
    if(total < 0){
        *hr = 0;
        *min = 0;
        *sec = (int) total;
        return 1; //failure
    }

    else if(total< 60 && total >= 0){
        *hr = 0;
        *min = 0;
        *sec = (int) total;
    }

    else if(total < 3600 && total > 60){
        *hr = 0;
        double x=*min;
        *sec = (modf((total/60), &x))*60;
    }

    else if(total >= 3600){
        double x = *min;
        double y =*hr;
        *min = (int) (modf((total/3600), &y))*60;
        *sec = (int) (modf((total/60), &x))*60;
    }

    return 0;
}