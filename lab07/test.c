#include <stdio.h>

int main(void){
    char *word = "desserts"; //temporary holder
    int num = 7;
    /*
    for(int i = 0; word[i] != '\0'; i++){
        num++;
    }
    */
    char arr[num];

    if(num <= 0){
        return 1;
    }
    else{
        for(int i = 0; i < num; i++){
            arr[i] = word[i]; 
        }

        for(int m = num; m > 0; m--){
            word[m] = arr[m];
        }
    }
    printf("%s\n", word);
}
