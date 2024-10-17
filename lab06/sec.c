/*
# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: sec.c
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: day, October th, 2024
#-------------------------------------------------------------------------------
*/
int sec2hms(double*, int*, int*, int*);

int main(void){
    double totalsec;
    int hr, min, sec;
    int ret;

    ret = sec2hms(&totalsec, &hr, &min, &sec);

    return 0;
}

int sec2hms(double* totalsec, int* hr, int* min, int*sec){
    if(totalsec < 0){
        return 1 //failure
    }

    return 0
}