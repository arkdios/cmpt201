/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: stats.c
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

int stats(double*, int*, double*, double*, double*);

int main(void){
    double arr1[20] = {89, 23, 45, 12, 32, 12, 13, 99, 123, 0};
    double arr2[20] = {23, 1, 3,10};
    double arr3[20] = {};

    //Test case 1:
    stats(arr1, &n, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work.\n");
    }
    else{
        printf("Array 1 = {89, 23, 45, 12, 32, 12, 13, 99, 123, 0}  Min = %lf    Max = %lf    Mean = %lf", min, max, mean);
    }

    //Test case 1:
    stats(arr2, &n, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work.\n");
    }
    else{
        printf("Array 1 = {23, 1, 3,10}  Min = %lf    Max = %lf    Mean = %lf", min, max, mean);
    }

    //Test case 3:
    stats(arr3, &n, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work.\n");
    }
    else{
        printf("Array 3 = {}  Min = %lf    Max = %lf    Mean = %lf", min, max, mean);
    }

    exit(EXIT_SUCCESS);
}

int stats(double* array, int* n, double* min, double* mean, double* max){

    

    return 0
}