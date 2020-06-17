#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_file_to_str(const char *filename);
unsigned mx_count_words(char *str);

#endif
