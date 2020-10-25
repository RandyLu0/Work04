#include "euler.h"
int a;

int problem1(){ 
    int sum = 0;
    for(a = 0; a < 1001; a++){
        if(a % 3 == 0 || a % 5 == 0){
            sum += a;
        }
    }
    return sum;
}

int problem6(){ 
    int squares = 0;
    int squared = 0;
    for(a = 0; a < 101; a++){
        squared += a;
        squares += a * a;
    }
    squared *= squared;
    return squared - squares;
}