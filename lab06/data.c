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
# date: Thursday, October 24th, 2024
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
    char fname[3][20] = {"q4Input1.txt","q4Input2.txt", "q4Input3.txt"};
    int staNum;//Station number
    double temp, pres;

    int ret = 0; //error checker, if failed to load, ret = 1, otherwise it is 0
    
    //Test case 1:
    loadData(fname[0],&staNum, &temp,&pres);
    if(ret == 1){
        printf("The function didn't work for the file: %s\n", fname[0]);
        }
    else{
        printf("From %s: station = %i      pressure = %.1f      temperature=%.1f\n", fname[0], staNum, pres, temp);
        }

    //Test case 2:
    loadData(fname[1],&staNum, &temp,&pres);
    if(ret == 1){
        printf("The function didn't work for the file: %s\n", fname[1]);
        }
    else{
        printf("From %s: station = %i      pressure = %.0f      temperature=%.0f\n", fname[1], staNum, pres, temp);
        }
    
    //Test case 3:
    loadData(fname[2],&staNum, &temp, &pres);
    if(ret == 1){
        printf("The function didn't work for the file: %s\n", fname[2]);
        }
    else{
        printf("From %s: station = %i      pressure = %.1f      temperature=%.1f\n", fname[2], staNum, pres, temp);
        }
    
    exit(EXIT_SUCCESS);
}

int loadData(char* filename, int* stationNumber, double* temp, double* pres){
    int x = 0; //close checker, 0 is closed, 1 is not
    int l = 0; //line counter
    
    //Open files
    FILE *fp;
        fp = fopen(filename, "r");
        if(fp == NULL){
            printf("Could not open file: %s.\n", filename);
		    exit(EXIT_FAILURE);
        }
        
        char line[50]; //initialize line holder
        char word[20]; //initialize word holder
        char spe[20]; //initialize char holder

        while(strncmp(line, "station: ", 8) != 0 && l<1){
            fgets(line, sizeof(line), fp); //get the line from .txt file
            l++;
        }
        sscanf(line,"%s %i", word, stationNumber); //get the station number
        
        //reset
        l = 0;
        
        while(strncmp(line, "pressure [kPa] :", 15) != 0 && l<2){
            fgets(line, sizeof(line), fp); //get the line from .txt file
            l++;
        }
        sscanf(line, "%s %s : %lf", word, spe, pres); //get the pressure

        //reset
        l = 0;

        while(strncmp(line, "Temperature [C]: ", 16) != 0 && l<3){
            fgets(line, sizeof(line), fp); //get the line from .txt file
            l++;
        }
        sscanf(line, "%s %s %lf", word, spe, temp); //get the temperature

        //reset
        l = 0;

    //closing files
    x = fclose(fp);
	if(x!=0){
		printf("Could not close file: %s\n", filename);
	    exit(EXIT_FAILURE);
    }
    return 0;
}