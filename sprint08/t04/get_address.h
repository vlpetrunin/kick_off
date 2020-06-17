#ifndef GET_ADDRESS_H
#define GET_ADDRESS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
unsigned long mx_hex_to_nbr(const char *hex);

#endif
