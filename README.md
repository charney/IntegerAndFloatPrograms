IntegerAndFloatPrograms
=======================

Programs to search for integers and floats in files. Flip endianness. Print the sign, exponent and mantissa of a floating point number from the output of other files

float_big_endian.c: Flips the endianness of a floating point number then writes it to file

float_little_endian.c: Prints the floating point number in the local machine's byte order.

float_man_exp.c: Takes the output of float_little_endian.c and prints out the sign, exponent and mantissa of the floating point number

float_search.c: Searchs through paired numbers (in the case of the homework a string of the date, and a floating pointing representing a CO2 level)
Reads the file, then prints the highest float, the lowest float and the average of them all.

int_big_endian.c: FLips the endianness of an integer then writes it to file

int_little_endian.c: Prints the integer in the local machine's byte order.

int_search.c: Searchs through paired numbers (in the case of the homework an integer of a zipcode, and an integer for population)
Reads the file, then prints the highest integer for population, the lowest integer for population, and the average population.

MAKEFILE: Compiles all programs by default, with ability to remove and tar them.
