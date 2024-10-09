#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    int err=0; //error counter
    char *token;
    int i=0;
    int num=0; //numeric counter
    int al=0; //alphatic counter
    int low=0; //lowercase counter
    char cop[4]; //string for copying
    char cop2[3]; //string for copying

    if(argc!=2){
        printf("Invalid Argument Counts.\n Required 2 Arguments but only found %i.\nUsage: ./checkFilename cmpt201_<Initials>_lab<lab number>.tar.gz.\n", argc);
        exit(EXIT_FAILURE);
    }

    token = strtok(argv[1], "_");
    if(strcmp(token, "cmpt201") != 0){
        err++;
        printf("Error: Wrong class name. Should have been cmpt201.\n");
    }
    else{
        token = strtok(NULL, "_");

        if(strlen(token)<2 || strlen(token)>3){
            err++;
            printf("Error: Initial exceeds word limit. Keep it between 2 and 3 letters.\n");
        }
        else{
            for(i=0; token[i] != '\0'; i++){
                if(isdigit(token[i])){
                    num++;
                }
            }
            
            if(num!=0){
                err++;
                printf("Error: Contains number in the Initials.\n");
            }
            else{
                for(i=0; token[i] != '\0'; i++){
                    if(islower(token[i])){
                        low++;
                    }
                }
                
                if(low!=0){
                    err++;
                    printf("Error: Contains lowercase letters in the Initials.\n");
                }
                else{
                    token = strtok(NULL, ".");
                    strncpy(cop, token, 3);
                    strncpy(cop2, (token + 3), 2);
                    printf("%s\n%s\n%s\n", cop, cop2, token);

                    if(strcmp(cop, "lab") != 0){
                        err++;
                        printf("Error: Should have been 'lab' and not anything else.\n");
                    }
                    else{
                        for(i=0; cop2[i] != '\0'; i++){
                            if(isalpha(cop2[i])){
                                al++;
                            }
                        }
                        
                        if(al != 0){
                            err++;
                            printf("Error: Use letters for lab number.\n");
                        }
                        else{
                            token = strtok(NULL, ".");

                            if(strcmp(token,"tar")!=0){
                                err++;
                                printf("Error: Should have been 'tar'.\n");
                            }
                            else{
                                token = strtok(NULL, ".");

                                if(strcmp(token, "gz")!=0){
                                    err++;
                                    printf("Error: Should have been 'gz'.\n");
                                } 
                            }
                        }
                    }
                }
            }
        }
    }

    if(err!=0){
        printf("rename before submitting\n");
        printf("Number of errors: %i\n", err);
    }
    else{
        printf("good to submit\n");
    }

    exit(EXIT_SUCCESS);
}