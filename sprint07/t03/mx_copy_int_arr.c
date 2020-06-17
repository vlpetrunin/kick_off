#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
	if (src == NULL || size < 1){
		return NULL;
	}
	int *a = malloc (size * sizeof(int));
	if (NULL != a){
		for (int i = 0; i < size; i++)
			a[i] = src[i];
	return a;
	}
return NULL;
}
