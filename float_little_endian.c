/*
 * float_little_endian.c
 *
 *  Created on: Mar 23, 2013
 *      Author: charney
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(argc != 3){
		return 0;
	}
	FILE* in = fopen(argv[1],"r");
	FILE* out = fopen(argv[2],"wb");
	char* first = (char*)malloc(sizeof(char)*100);
	float second;
	while(fscanf(in,"%s %f",first,&second) == 2){
		fwrite(&second,4,1,out);
	}

	return 0;

}
