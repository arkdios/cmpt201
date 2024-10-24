/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: test_pointerFun.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: day, October th, 2024
#-------------------------------------------------------------------------------
*/

#include <math.h>

//Q1: (35 marks)
void poly(double* coef, double* x, double* y, int* nc, int* na){
    
}

//Q2: (25 marks)
void reverso(char* str, int* n){
    char word = *str; //temporary holder
    int len = *n;
    int num = -1;

    if(len > 0){
        for(int i = 0; i < len; i++){
            word[++num] = str[num--];
        }

        for(int i = 0; i < len; i++){
            str[i] = word[num--];
        }
        
    }
}

//Q3: (40 marks)
void str_centre(char* str, int* n){
    
}