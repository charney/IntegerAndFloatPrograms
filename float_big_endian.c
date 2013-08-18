/*
 * float_big_endian.c
 *
 *  Created on: Mar 23, 2013
 *      Author: Chad Harney
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <netinet/in.h>

int main(int argc, char* argv[]){
	if(argc != 3){
		return 0;
	}

	union u {
		float num;
		int i;
	};

	FILE* in = fopen(argv[1],"r");
	FILE* out = fopen(argv[2],"wb");

	union u swap;
	char* first = (char*)malloc(sizeof(char)*100);
	float second, final;

	while(fscanf(in,"%s %f",first,&second) == 2){
		swap.num = second;
		swap.i = htonl(swap.i);
		final = swap.num;
		fwrite(&final,4,1,out);
	}

	return 0;

}
