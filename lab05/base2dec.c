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
    int num = 0;//the number xb
    int y = 0;

    //Assigning numerical values to letters
    //First loop every single character of argv[1]
    for(int i = 0; i < strlen(argv[1]); i++){
        num = 0;

        switch(argv[1][i]){
            case('A'):
            num = 10;
            break;

            case('B'):
            num = 11;
            break;

            case('C'):
            num = 12;
            break;

            case('D'):
            num = 13;
            break;

            case('E'):
            num = 14;
            break;
            case('F'):
            num = 15;
            break;

            default:
            num = (int) (argv[1][i] - '0');
        }
        
        y += num*pow(base, strlen(argv[1])-(i+1));
    }

    //Outputs:
    printf("%i\n", y);
    exit(EXIT_SUCCESS);
}