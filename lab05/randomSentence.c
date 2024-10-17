/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: randomSentence.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: Wednesday, October 16th, 2024
#-------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define rMax 20
#define rMin 0

int main(void){
    
    //initialize variables:
    int line_n; //noun randomizer
    int line_v; //verb randomizer
    int line_ar; //articles randomizer
    int line_adj; //adjectives randomizer
    int line_adv; //adverb randomizer
    int n = 0; //counter for line searching in .txt files

    //Initialize holders
    char noun[20]; //holds the noun string
    char verb[20]; //holds the verb string
    char adv[20]; //holds the adverb string
    char adj[20]; //holds the adjective string
    char art[20]; //holds the article string: a, an, the
    char txt[5][20] = {"adjectives.txt", "adverb.txt", "articles.txt", "noun.txt", "verb.txt"}; //holds the file names

    //randdomizing within specific range, in my case is from 0 to 20
    srand(time(NULL));
    line_n = rand() % (rMax);
    line_v = rand() % (rMax);
    line_ar = rand() % (rMax);
    line_adj = rand() % (rMax);
    line_adv = rand() % (rMax);

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