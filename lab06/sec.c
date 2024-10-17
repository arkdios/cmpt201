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
#include <math.h>

int sec2hms(double*, int*, int*, int*);

int main(void){
    double totalsec[5] = {-4000, 7000, 13500};
    int hr, min, sec;
    int ret;

    for(int i=0; i < 5; i++){
        ret = sec2hms(&totalsec[i], &hr, &min, &sec);
        if(ret == 1){
            printf("The function did not work.\n");
            printf("totalSec= %lf         hr= %i        min= %i       sec= %i\n", totalsec[i], hr, min, sec);
        }
        else{
            printf("totalSec= %lf         hr= %i        min= %i       sec= %i\n", totalsec[i], hr, min, sec);
        }
    }
    return 0;
}

int sec2hms(double* totalsec, int* hr, int* min, int*sec){
    
    if(totalsec < 0){
        hr = 0;
        min = 0;
        sec = totalsec;
        return 1; //failure
    }

    else if(totalsec < 60 && totalsec >= 0){
        hr = 0;
        min = 0;
        sec = totalsec;
    }

    else if(totalsec < 3600 && totalsec > 60)
        hr = 0;
        sec = (modf((totalsec/60), &min))*60;

    else if(totalsec >= 3600){
        min = (modf((totalsec/3600), &hr))*60;
        sec = (modf((totalsec/60), &min))*60;
    }

    return 0;
}