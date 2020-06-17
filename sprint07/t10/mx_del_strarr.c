#include <stdlib.h>

void mx_del_strarr(char ***arr){
	for(int i = o; (*arr)[b]; b++){
		free((*arr)[b]);
	}
	free(*arr);
	*arr = NULL;
}
