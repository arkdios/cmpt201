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
    //Initialize variables
    double arr1[] = {89, 23, 45, 12, 32, 12, 13, 99, 123, 0};
    double arr2[] = {23, 1, 3,10};
    double arr3[] = {};
    double min, max, mean;
    int ret = 0; //return value

    //Test case 1:
    int m = sizeof(arr1)/sizeof(arr1[0]); 
    ret = stats(arr1, &m, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work for Array 1.\n");
    }
    else{
        printf("Array 1 = {89, 23, 45, 12, 32, 12, 13, 99, 123, 0}  Min = %.0f    Max = %.0f    Mean = %.1f\n", min, max, mean);
    }

    min = 999; max =0; mean =0;
    //Test case 2:
    int n = sizeof(arr2)/sizeof(arr2[0]);
    ret = stats(arr2, &n, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work for Array 2.\n");
    }
    else{
        printf("Array 1 = {23, 1, 3,10}  Min = %.0f    Max = %.0f    Mean = %.1f\n", min, max, mean);
    }

    min = 999; max =0; mean =0;
    //Test case 3:
    int o = 0;
    ret = stats(arr3, &o, &min, &mean, &max);
    if(ret == 1){
        printf("The function did not work for Array 3.\n");
    }
    else{
        printf("Array 3 = {}  Min = %.0f    Max = %.0f    Mean = %.1f\n", min, max, mean);
    }

    exit(EXIT_SUCCESS);
}

int stats(double* array, int* n, double* min, double* mean, double* max){

    int sum = 0; //Sum of the array

    if(*n < 1){
        printf("abc\n");
        return 1;
    }

    else{
        //Loop for min value
        for(int i = 0; i < *n; i++){
            if(*min > array[i]){
                *min = array[i];
            }
        }

        //Loop for max value
        for(int x = 0; x < *n; x++){
            if(*max < array[x]){
                *max = array[x];
            }
        }

        //Loop for mean value
        for(int a = 0; a < *n; a++){
            sum += array[a];
        }
        *mean = sum/(*n);
        printf("%i %i\n",sum, *n);
        return 0;
    }
}