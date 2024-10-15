//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[]){
    //Check for argument counts
    if(argc!=3){
        printf("Invalid Argument Counts.\nRequired 3 Arguments but found %i.\nUsage: ./base2dec <a number> <its base>\n", argc);
        exit(EXIT_FAILURE);
    }

    int base = atoi(argv[2]); //base of the number
    int num = atoi(argv[1]); //the number xb
    char alp[26][2] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int con; //the converted number
    int y = 0; //decimal form of the base b

    //Assigning numerical values to letters
    //First loop every single character of argv[1]
    for(int i = 0; i < strlen(argv[1]); i++){
        //Second loop for looping the alphabet
        for(int n = 0; n < 26; n++){
            if(strcmp(argv[1][i], alp[n]) == 0){
                con = 10 + n;
            }
        }
        if(num != 0){
            y += con*pow(base, strlen(argv[1])-(i+1));
        }
        else{
            y += num*pow(base, strlen(argv[1])-(i+1));
        }
    }

    //Outputs:
    printf("%i\n", y);
    exit(EXIT_SUCCESS);
}