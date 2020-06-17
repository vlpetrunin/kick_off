#include <stdlib.h>
#include <stdio.h>
char *mx_strnew(const int size) {
	char *a = malloc (size + 1);
  	if (NULL !=  a && size > 0) {
	for (int i = 0; i <= size; i++) { 
	a[i] = '\0';
  	}
  	return a;
	}
return NULL;
}
//int main() {
//	printf("%s", mx_strnew(50));
//}

