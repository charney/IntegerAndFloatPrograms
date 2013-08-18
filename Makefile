cc = gcc

all: int_search float_search int_little_endian int_big_endian float_little_endian float_big_endian float_man_exp

int_search: int_search.c
	$(cc) -o int_search int_search.c

float_search: float_search.c
	$(cc) -o float_search float_search.c
	
int_little_endian: int_little_endian.c
	$(cc) -o int_little_endian int_little_endian.c
	
int_big_endian: int_big_endian.c
	$(cc) -o int_big_endian int_big_endian.c
	
float_little_endian: float_little_endian.c
	$(cc) -o float_little_endian float_little_endian.c
	
float_man_exp: float_man_exp.c
	$(cc) -o float_man_exp float_man_exp.c
	
float_big_endian: float_big_endian.c
	$(cc) -o float_big_endian float_big_endian.c
	
clean:
	rm -f int_search float_search int_little_endian int_big_endian float_little_endian float_big_endian float_man_exp

tar:
	tar zcf turnin.tgz Makefile int_search.c float_search.c int_little_endian.c int_big_endian.c float_little_endian.c float_big_endian.c float_man_exp.c