/*
 * float_search.c
 *
 *  Created on: Mar 21, 2013
 *      Author: Chad Harney
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc != 3){
        return 0;
    }
    FILE* in = fopen(argv[1],"r");
    FILE* out = fopen(argv[2],"w");
    char* date = (char*)malloc(sizeof(char)*100);
    float co2, low, avg, high, amount, total;

    total = 1;
    fscanf(in,"%s %f",date,&co2);
    amount = co2;
    low = co2;
    high = co2;
    while(fscanf(in,"%s %f",date,&co2) == 2){
        amount += co2;
        total++;
        if(co2 > high){
            high = co2;
        }
        if(co2 < low){
            low = co2;
        }
    }
    avg = amount/total;
    fprintf(out,"%f\n%f\n%.3f\n",low, high, amount/total);

    return 0;
}

