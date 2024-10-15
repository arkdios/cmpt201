//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]){
    //Check for argument counts
    if(argc!=3){
        printf("Invalid Argument Counts.\nRequired 3 Arguments but found %i.\nUsage: ./base2dec <a number> <its base>\n", argc);
        exit(EXIT_FAILURE);
    }

    int base = atoi(argv[2]); //base of the number
    char alp[26][2] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int num; //the converted number
    int test;

    //Assigning numerical values to letters
    //First loop every single character of argv[1]
    for(int i = 0; i < strlen(argv[1]); i++){
        //Second loop for looping the alphabet
        for(int n = 0; n < 26; n++){
            if(strcmp(argv[1][i], alp[n]) == 0){
                num = argv[1][i] - (31 + n);
            }
        }
    }

    //split argv[1] and multiplies each of its element with argv[2]
    for(int m = 0; m < strlen(argv[1]); m++){
        
    }
    exit(EXIT_SUCCESS);
}