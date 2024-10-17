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

int loadData(char*, int*, double*, double* );

int main(void){
    //open file for reading
    //if this is false return 1
    //Initialize variables
    char fname = "data.dat";
    int staNum; //Station number
    double temper; //temperature 
    double pressure; //pressure
    


    exit(EXIT_SUCCESS);
}

int loadData(char* filename, int* stationNumber, double* temp, double* pres){
    FILE* fp;
    fp = fopen(filename, "r");
    if(fp == NULL){
            printf("Could not open file: %s.\n", fname);
		    exit(EXIT_FAILURE);
        }
}