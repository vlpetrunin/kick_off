#include "header.h"

int main(int argc, char *argv[]){
	char buff;
	int file = 0;
		if (argc != 2){
			mx_printerr("usage: ./read_file [file_path]\n");
			return 0;
		}
		else {
			file = open(argv[1], O_RDONLY);
			if (file == -1){
				mx_printerr("error\n");
				return 0;
			}
			else {
				while(read(file, &buff, 1))
					mx_printchar(buff);
			}
			close(file);
		}
		return 0;
}
