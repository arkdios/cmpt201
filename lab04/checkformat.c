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
    char head[100]; // header

    fgets(head, sizeof(head), fp);
    ret = fscanf(fp, "%d", &ent_num);
    printf("ret: %i\nheader: %s\nentries: %d\n", ret, head, ent_num);
    if(ret==1){
        for(int i=0; i<ent_num; i++){
        ret = fscanf(fp,"%*d, %d", &entries);
        printf("\nret: %i\nentry: %d\n", ret, &entries);

        if(ret != 2){
            err++;
            printf("Error %i\n", err);
        }
        }
    }
    else{
        err++;
    }

    if(err != 0){
        printf("file not valid\n");
    }
    else{
        printf("file valid\n");
    }

    exit(EXIT_SUCCESS);
}