//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define infinity 200

int main(int argc, char* argv[]){
    int err = 0; //error counter
    double ln = 0; //log(e) of x

    //Check for argument counts aka. argc
    
    if(argc!=2){
        printf("Invalid Argument Counts.\nRequired 2 Arguments but found %i.\nUsage: ./lawn <x value>\n", argc);
        exit(EXIT_FAILURE);
    }
    double x = atof(argv[1]);
    //error checkers:
    if(x > 0 && x <= 1){
        //calculate the equation using loop
        for(int k = 1; k <= infinity; k++){
            ln += (pow(-1,k-1)*pow(x-1,k))/k;
        }
    }
    else{
        err++;
        printf("Error: x have to be between 0 and 1. Try again.\n");
        exit(EXIT_FAILURE);
        }
    
    printf("No error found.\n");
    printf("ln(x) = %lf\n", ln);

    exit(EXIT_SUCCESS);
}
