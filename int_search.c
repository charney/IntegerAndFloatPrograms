/*
 * int_search.c
 *
 *  Created on: Mar 21, 2013
 *      Author: Chad Harney
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc != 3){
		return 0;
	}

	FILE* in = fopen(argv[1],"r");
	FILE* out = fopen(argv[2],"w");

	int zip, pop, low, high;
	double total, amount, avg;
	total = 1;
	fscanf(in,"%d %d",&zip,&pop);
	amount += pop;
	low = pop;
	high = pop;

	while(fscanf(in,"%d %d",&zip,&pop) == 2){
		amount += pop;
		total++;
		if(pop > high){
			high = pop;
		}
		if(pop < low){
			low = pop;
		}
	}
	avg = amount/total;
	fprintf(out,"%d\n%d\n%.3lf\n",low, high, avg);

	return 0;
}
