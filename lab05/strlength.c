//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    int len = 0;
    
    //Check for argument counts aka. argc
    
    if(argc!=2){
        printf("Invalid Argument Counts.\nRequired 2 Arguments but found %i.\nUsage: ./strlength <string>\n", argc);
        exit(EXIT_FAILURE);
    }

    //loop if got the correct count

    for(int i = 0; argv[1][i] != '\0'; i++){
        len++;
    }

    //Output result:

    printf("The length of %s is %i.\n", argv[1], len);
    exit(EXIT_SUCCESS);
}