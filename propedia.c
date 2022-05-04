#include <stdio.h>
int row, col, P[10][10];

int main(){
    for (row=1; row<=10; row++){
        for (col=1; col<=10; col++){
            P[row][col]= row*col;
            printf("[%dx%d = %d] ", row, col, P[row][col]);
        }    
            printf("\n");
    }
}
