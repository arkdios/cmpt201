#Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char ch;
    char word;
    int i = 0;
    int asc = 0; //ascii holder
    int cc=0; //counter for control characters
    int sc=0; //counter for special characters
    int l=0; //counter for letters
    int d=0; //counter for digits

    char ret1[10];
    char ret2[10];
    char ret3[10];
    char ret4[10];

    printf("Please enter a string: ");
    ch = getchar();
    

    while(ch!="\n"){
        asc = (int) ch;
        
        if(0<=asc<=31 || asc==127){
            cc++;
        }
        else if(){
            sc++;
        }
        else if(){
            d++;
        }
        else if(){
            l++;
        }
        i++;
        
        asc = 0;
    }

    switch(cc){
        case 0: break;
        case 1: ret1 = "a control character"; break;
        default: ret1 = "control characters"; break;
    }

    switch(sc){
        case 0: break;
        case 1: ret1 = "a special character"; break;
        default: ret1 = "special characters"; break;
    }

    switch(d){
        case 0: break;
        case 1: ret1 = "a number"; break;
        default: ret1 = "numbers"; break;
    }

    switch(l){
        case 0: break;
        case 1: ret1 = "a letter"; break;
        default: ret1 = "letters"; break;
    }

    if(cc == strlen(s)){
        printf("Contains all %c\n", ret1);
    }

    else if(sc == strlen(s)){
        printf("Contains all %c\n", ret2);
    }

    else if(d == strlen(s)){
        printf("Contains all %c\n", ret3);
    }
    else if(l == strlen(s)){
        printf("Contains all %c\n", ret4);
    }
    

    exit(EXIT_SUCCESS);
}