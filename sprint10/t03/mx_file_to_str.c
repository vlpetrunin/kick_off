#include "header.h"

char *mx_file_to_str(const char *filename){
	char buff;
	int len = 0;
	int i = 0;
	int file = open(filename, O_RDONLY);

	if (file == -1)
		return NULL;

	while (read(file, &buff, 1))
		len++;

	close(file);
	file = open(filename, O_RDONLY);
	char *string = mx_strnew(len);
	while (read(file, &buff, 1)){
		string[i] = buff;
		i++;
	}
	close(file);
	return string;
}

// int main(void){
// 	printf("%s", mx_file_to_str("mx_strnew.c"));
// 	system ("leaks -q io");
// }
