/*
 * int_little_endian.c
 *
 *  Created on: Mar 23, 2013
 *      Author: Chad Harney
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc != 3){
		return 0;
	}

	FILE* in = fopen(argv[1],"r");
	FILE* out = fopen(argv[2],"wb");
	int first, second;

	while(fscanf(in,"%d %d",&first,&second) == 2){
		fwrite(&second,4,1,out);
	}

}


