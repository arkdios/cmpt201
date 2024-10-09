#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char ch = "a";
    char s[30];
    int i = 0;
    int cc=0; //counter for control characters
    int sc=0; //counter for special characters
    int l=0; //counter for letters
    int d=0; //counter for digits

    printf("Please enter a string: ");
    scanf("%s", s);
    
    if(strlen(s)>30){
        printf("Invalid string length.\nThe input should not exceed 30 characters.\nPlease try again.\n");
        exit(EXIT_FAILURE);
    }

    ch = getc(stdin);
    while(ch!="\n"){
        s[i] = ch;
        i++;
        ch = getc(stdin);
        
    }

    exit(EXIT_SUCCESS);
}