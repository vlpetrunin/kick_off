#include "header.h"

int main(int argc, char *argv[]){
	char buff;
	int src, dst;

	if(argc != 3){
		mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
		return 0;
	}
	src = open(argv[1], O_RDONLY);

	if (src < 0){
		mx_printerr("mx_cp: ");
		mx_printerr(argv[1]);
		mx_printerr(": No such file or directory\n");
		return 0;
	}

	dst = open(argv[2], O_RDONLY);
	if(dst == -1)
		dst = open(argv[2], O_WRONLY | O_CREAT);

	while (read(src, &buff, 1))
		write(dst, &buff, 1);

	close(src);
	close(dst);

	return 0;
}
