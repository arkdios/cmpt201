/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: data.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: day, October th, 2024
#-------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int loadData(char*, int*, double*, double* );

int main(void){
    //open file for reading
    //if this is false return 1
    //Initialize variables
    char fname[3][20] = {"q4Input1.txt","q4Input2.txt", "q4Input3.txt"}
    int staNum; //Station number
    double temper; //temperature 
    double pressure; //pressure
    int ret = 0; //error checker, if failed to load, ret = 1, otherwise it is 0
    int x; //close checker, 0 is closed, 1 is not
    
    //Open files
    FILE *fp[3];
    for(int i=0; i < 3; i++){
        fp[i] = fopen(fname[i], "r");
        if(fp[i] == NULL){
            printf("Could not open file: %s.\n", fname[i]);
		    exit(EXIT_FAILURE);
        }
    }
    
    //testing
    for(int n = 0; n < 3; n++){

        ret = loadData(char* fname[n], int* staNum, double* temper, double* pressure);
        if(ret == 1){
            printf("The function didn't work for %s\n", fname[n])
        }
        else{
        printf("From %s: station = %i      pressure = %lf      temperature=%lf\n", fname[n], staNum, temper, pressure);
        }
    }

    //closing files
    for(int a = 0; a < 3; a++){
        x = fclose(fp[a]);
	    if(x!=0){
		    printf("Could not close file: %s\n", fp[a]);
		    exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}

int loadData(char* filename, int* stationNumber, double* temp, double* pres){
    
}