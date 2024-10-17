/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: strlength.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: Wednesday, October 16th, 2024
#-------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    //Initialize variables
    int len = 0;
    
    //Check for argument counts aka. argc
    
    if(argc!=2){
        printf("Invalid Argument Counts.\nRequired 2 Arguments but found %i.\nUsage: ./strlength <string>\n", argc);
        exit(EXIT_FAILURE);
    }

    //loop if got the correct argument counts

    for(int i = 0; argv[1][i] != '\0'; i++){
        len++;
    }

    //Output result:

    printf("The length of %s is %i.\n", argv[1], len);
    exit(EXIT_SUCCESS);
}