//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    char *token;
    char filename[10];
    int err = 0;

    if(argc!=2){
        printf("Invalid Argument Counts.\nRequired 2 Arguments but only found %i.\nUsage: ./checkformat <filename>.dat\n", argc);
        exit(EXIT_FAILURE);
    }
    else{
        token = strtok(argv[1], ".");
        strcat(filename, token);
        token = strtok(NULL, "\n");

        if(strcmp(token, "dat") == 0){
            strcat(filename, ".dat");
        }
        else{
            err++;
        }
    }

    FILE* fp;
    int ret;
    //printf("%s\n", filename);
    fp = fopen(filename, "r");
    if(fp == NULL){
		printf("Could not open file.\n");
		exit(EXIT_FAILURE);
	}
    
    int ent_num; //number of entries
    int entries; //entries

    //I'm really sorry, I still don't understand how fscanf() works, this is the farthest I could go to make sure it does not crash
    ret = fscanf(fp, "%d", &ent_num); //The &% you told me this afternoon crash my code whenever I tries
    if(ret==1){
        ret = fscanf(fp,"%d", &entries); //The "%d,%d" kept crashing my code unless one of them was removed
    }

    if(err != 0){
        printf("file not valid\n");
    }
    else{
        printf("file valid\n");
    }

    exit(EXIT_SUCCESS);
}