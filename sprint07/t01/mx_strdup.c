//#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str) {
	int size = mx_strlen(str);
	if (mx_strnew(size) != NULL) {
	char *cpy = mx_strnew(size);	
	mx_strcpy(cpy, str);
	return cpy;
	}
return NULL;
}
//int main() {
//	const char *s = "4375834753895734957385738945983";
//	printf("%s\n", mx_strdup(s));
//}
