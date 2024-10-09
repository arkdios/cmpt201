#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    char *token;
    char suffix[];
    char filename[];
    int err = 0;

    if(argc!=3){
        printf("Invalid Argument Counts.\n Required 2 Arguments but only found %i.\nUsage: ./checkformat <filename>.dat\n", argc);
        exit(EXIT_FAILURE);
    }
    else{
        token = strtok(argv[1], ".");
        token = strtok(NULL, "\n");
        suffix = token;
        token = strtok(argv[1], ".");
        if(suffix == "dat"){
            strcat(filename, token);
            strcat(filename, ".dat");
        }
        else{
            err++;
        }
    }

    FILE* fp = fopen("%s", "r", filename);
    if(fp==NULL){
		printf("Could not open file.\n");
		exit(EXIT_FAILURE);
	}
    int ret;
    
    

    ret = fscanf(fp, "%d", &%);
    if(ret==1){
        ret = fscanf(fp,"%d,%d");
    }

    if(err != 0){
        printf("file not valid");
    }
    else{
        printf("file valid");
    }

    exit(EXIT_SUCCESS);
}