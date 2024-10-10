//Tuan Huynh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){
    char ch;
    int i = 0;
    int asc = 0; //ascii holder
    int cc=0; //counter for control characters
    int sc=0; //counter for special characters
    int l=0; //counter for letters
    int d=0; //counter for digits

    char ret1[30];
    char ret2[30];
    char ret3[30];
    char ret4[30];

    //Loop:
    printf("Please enter a string: ");
    ch = getchar();

    while(ch!='\n'){
        asc = (int) ch;
        
        if((0<=asc && asc<=31) || asc==127){
            cc++;
        }
        else if((32<=asc && asc<=47) || (58<=asc && asc<=64) || (91<=asc && asc<=96) || (123<=asc && asc<=126)){
            sc++;
        }
        else if(48<=asc && asc<=57){
            d++;
        }
        else if((65<=asc && asc<=90) || (97<=asc && asc<=122)){
            l++;
        }
        i++;
        
        ch = getchar();
        asc = 0;
    }
    
    //Holders for each case
    switch(cc){
        case 0: break;
        case 1: strcpy(ret1, "a control character"); break;
        default: strcpy(ret1, "control characters"); break;
    }

    switch(sc){
        case 0: break;
        case 1: strcpy(ret2, "a special character"); break;
        default: strcpy(ret2, "special characters"); break;
    }

    switch(d){
        case 0: break;
        case 1: strcpy(ret3, "a number"); break;
        default: strcpy(ret3, "numbers"); break;
    }

    switch(l){
        case 0: break;
        case 1: strcpy(ret4, "a letter"); break;
        default: strcpy(ret4, "letters"); break;
    }

    //Outputs:
    if(cc > 1 && sc == 0 && d == 0 && l == 0){
        printf("Contains all %s\n", ret1);
        }

    else if(cc == 0 && sc > 1 && d == 0 && l == 0){
        printf("Contains all %s\n", ret2);
        }

    else if(cc == 0 && sc == 0 && d > 1 && l == 0){
        printf("Contains all %s\n", ret3);
        }
    
    else if(cc == 0 && sc == 0 && d == 0 && l > 1){
        printf("Contains all %s\n", ret4);
        }
    
    else if(cc == 1 && sc == 0 && d == 0 && l == 0){
        printf("Contains %s\n", ret1);
        }

    else if(cc == 0 && sc == 1 && d == 0 && l == 0){
        printf("Contains %s\n", ret2);
        }

    else if(cc == 0 && sc == 0 && d == 1 && l == 0){
        printf("Contains %s\n", ret3);
        }
    
    else if(cc == 0 && sc == 0 && d == 0 && l == 1){
        printf("Contains %s\n", ret4);
        }

    else if(cc == 1 && sc == 1 && d == 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc == 1 && d == 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc == 1 && sc == 0 && d == 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc == 1 && d == 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc == 1 && sc == 1 && d == 0 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc == 1 && sc == 1 && d == 0 && l == 0){
        printf("Contains %s and %s\n", ret2, ret1);
    }

    else if(cc == 1 && sc == 0 && d == 0 && l == 1){
        printf("Contains %s and %s\n", ret4, ret1);
    }

    else if(cc == 1 && sc == 0 && d == 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret1);
    }

    else if(cc == 0 && sc == 1 && d == 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret2);
    }

    else if(cc == 0 && sc == 1 && d == 0 && l == 1){
        printf("Contains %s and %s\n", ret4, ret2);
    }

    else if(cc == 0 && sc == 0 && d == 1 && l == 1){
        printf("Contains %s and %s\n", ret4, ret3);
    }

    else if(cc > 1 && sc > 1 && d > 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc > 1 && d > 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d > 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d > 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc > 1 && d == 0 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc > 1 && sc > 1 && d == 0 && l == 0){
        printf("Contains %s and %s\n", ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 0 && l > 1){
        printf("Contains %s and %s\n", ret4, ret1);
    }

    else if(cc > 1 && sc == 0 && d > 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d > 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret2);
    }

    else if(cc == 0 && sc > 1 && d == 0 && l > 1){
        printf("Contains %s and %s\n", ret4, ret2);
    }

    else if(cc == 0 && sc == 0 && d > 1 && l > 1){
        printf("Contains %s and %s\n", ret4, ret3);
    }

    //more cases:

    else if(cc == 1 && sc > 1 && d > 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc == 1 && d > 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc == 1 && d == 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc == 1 && d > 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc > 1 && d == 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc == 1 && d == 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc > 1 && d == 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc > 1 && d > 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc == 1 && d == 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc == 1 && d > 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc > 1 && d == 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc == 1 && d > 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc > 1 && d == 1 && l > 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc > 1 && sc > 1 && d > 1 && l == 1){
        printf("Contains %s, %s, %s, and %s\n",ret4,ret3,ret2,ret1);
    }

    else if(cc == 1 && sc > 1 && d > 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc == 1 && sc == 0 && d > 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc == 1 && d > 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc == 1 && sc > 1 && d == 0 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc == 1 && sc > 1 && d == 0 && l == 0){
        printf("Contains %s and %s\n", ret2, ret1);
    }

    else if(cc == 1 && sc == 0 && d == 0 && l > 1){
        printf("Contains %s and %s\n", ret4, ret1);
    }

    else if(cc == 1 && sc == 0 && d > 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret1);
    }

    else if(cc == 0 && sc == 1 && d > 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret2);
    }

    else if(cc == 0 && sc == 1 && d == 0 && l > 1){
        printf("Contains %s and %s\n", ret4, ret2);
    }

    else if(cc == 0 && sc == 0 && d == 1 && l > 1){
        printf("Contains %s and %s\n", ret4, ret3);
    }
    
    //extra cases:

    else if(cc > 1 && sc == 1 && d == 0 && l == 0){
        printf("Contains %s and %s\n", ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 0 && l == 1){
        printf("Contains %s and %s\n", ret4, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d == 1 && l == 0){
        printf("Contains %s and %s\n", ret3, ret2);
    }

    else if(cc == 0 && sc > 1 && d == 0 && l == 1){
        printf("Contains %s and %s\n", ret4, ret2);
    }

    else if(cc == 0 && sc == 0 && d > 1 && l == 1){
        printf("Contains %s and %s\n", ret4, ret3);
    }

    //extra extra cases:

    else if(cc > 1 && sc == 1 && d > 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d == 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc == 1 && d == 0 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc > 1 && sc > 1 && d == 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d > 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d > 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc > 1 && d == 0 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    //extras:

    else if(cc > 1 && sc == 1 && d == 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d == 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc == 1 && d == 0 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc > 1 && sc == 1 && d > 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d == 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d == 1 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc == 1 && d == 0 && l > 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else if(cc > 1 && sc > 1 && d == 1 && l == 0){
        printf("Contains %s, %s, and %s\n", ret3, ret2, ret1);
    }

    else if(cc > 1 && sc == 0 && d > 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret1);
    }

    else if(cc == 0 && sc > 1 && d > 1 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret3, ret2);
    }

    else if(cc > 1 && sc > 1 && d == 0 && l == 1){
        printf("Contains %s, %s, and %s\n", ret4, ret2, ret1);
    }

    else{
        printf("I'm really sorry, I did not cover that case!\n");
    }

    exit(EXIT_SUCCESS);
}