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

#include <stdio.h>
#include "pointerFun.h"

int main(void){
    //Initializing the variables
    //double coef, x, y;
    //int nc, na;
    char str[30];
    int n = 0;
    const char *border = "<<<-------borderline------->>>";

    //Q1:
    printf("\n%s\nQ1: (35 marks)\n\n", border);
    //Case 1:

    //Q2:
    printf("\n%s\nQ2: (25 marks)\n\n", border);
    //Case 1:
    sprintf(str, "Emit");
    for(int i = 0; i< n; i++){
        n++;
    }
    printf("Case 2:\nInitial word: %s\n", str);
    reverso(str, &n);
    if(n <= 0){
        printf("The function did not work.\n");
    }
    else{
        printf("The returned string: %s\n", str);
    }

    //Case 2:
    //sprintf(str, "");
    n = 0;
    for(int i = 0; i < n; i++){
        n++;
    }
    printf("Case 2:\nInitial word: %s\n", str);
    reverso(str, &n);
    if(n <= 0){
        printf("The function did not work.\n");
    }
    else{
        printf("The returned string: %s\n", str);
    }

    //Case 3:
    sprintf(str, "Desserts");
    n = 0;
    for(int i = 0; str[i] != '\0'; i++){
        n++;
    }
    printf("Case 3:\nInitial word: %s\n", str);
    reverso(str, &n);
    if(n <= 0){
        printf("The function did not work.\n");
    }
    else{
        printf("The returned string: %s\n", str);
    }

    //Q3:
    printf("\n%s\nQ3: (40 marks)\n\n", border);
    //Case 1

    return 0;
}