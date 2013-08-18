/*
 * float_man_exp.c
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

	FILE* in = fopen(argv[1],"rb");
	FILE* out = fopen(argv[2],"wb");
	char* first = (char*)malloc(sizeof(char));
	float second;
	unsigned int bit;
	int i;

	while(fread(&second,4,1,in) == 1){

		float *ptr = &second;
		unsigned int *iptr = (unsigned int*)ptr;
		unsigned int val = *iptr;
		bit = val >> 31;
		fprintf(out,"%x ",bit);
		bit = val << 1;
		bit =  bit >> 24;
		for(i = 0; i < 8; i++)
		{
			unsigned char b;
			b = bit << i;
			b = b >> 7;
			fprintf(out,"%x", b);
		}
		fprintf(out," ");
		bit = val << 9;
		bit = bit >> 9;
		for(i = 9; i < 32; i++)
				{
					unsigned int b;
					b = bit << i;
					b = b >> 31;
					fprintf(out,"%x", b);
				}
		fprintf(out,"\n");
	}

}

