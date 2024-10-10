//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define rMax 20
#define rMin 0

int main(void){
    
    //initializing variables:
    int line_n; //noun randomizer
    int line_v; //verb randomizer
    int line_ar; //articles randomizer
    int line_adj; //adjectives randomizer
    int line_adv; //adverb randomizer
    char noun[20];
    char verb[20];
    char adv[20];
    char adj[20];
    char art[20];
    char txt[5][20] = {"adjectives.txt", "adverb.txt", "articles.txt", "noun.txt", "verb.txt"};

    //randdomizing within specific range, in my case is from 0 to 20
    srand(time(NULL));
    line_n = rand() % (rMax);
    line_v = rand() % (rMax);
    line_ar = rand() % (rMax);
    line_adj = rand() % (rMax);
    line_adv = rand() % (rMax);
    printf("%i %i %i %i %i\n", line_adj, line_adv, line_ar, line_n, line_v);

    //open file in alphabetic order:
    FILE *fp[5];
    for(int i=0; i < 5; i++){
        fp[i] = fopen(txt[i], "r");
        if(fp[i] == NULL){
            printf("Could not open file: %s.\n", txt[i]);
		    exit(EXIT_FAILURE);
        }
    }

    //getting the nth line from each file
    int n = 0;
    while(n<line_adj){
        fgets(adj, sizeof(adj), fp[0]);
        n++;
        }
    
    n=0; //reset counter
    while(n<line_adv){
        fgets(adv, sizeof(adv), fp[1]);
        n++;
        }

    n=0; //reset counter
    while(n<line_ar){
        fgets(art, sizeof(art), fp[2]);
        n++;
        }
    
    n=0; //reset counter
    while(n<line_n){
        fgets(noun, sizeof(noun), fp[3]);
        n++;
        }

    n=0; //reset counter
    while(n<line_v){
        fgets(verb, sizeof(verb), fp[4]);
        n++;
        }

    //change the penultimate char to '\0'
    adj[strlen(adj)-1] = '\0';
    adv[strlen(adv)-1] = '\0';
    art[strlen(art)-1] = '\0';
    noun[strlen(noun)-1] = '\0';
    verb[strlen(verb)-1] = '\0';

    //output:
    printf("%s %s %s %s %s.\n", art, adj, noun, verb, adv);
    
    exit(EXIT_SUCCESS);
}