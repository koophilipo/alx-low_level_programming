#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>



int convert_bin_decimal(char *str);
int _pow(unsigned int z, unsigned int p);
int _strlen(const char *str);
char *_strdup(const char *d);
unsigned int binary_to_uint(const char *b);
int _putchar(int c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int index_range(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);

#endif
