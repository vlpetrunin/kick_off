#include <stdlib.h>
//#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
	if (NULL == s1 && NULL != s2) {
		char *s3 = mx_strdup(s2);
		return s3;
	}
	if (NULL == s2 && NULL != s1) {
		char *s3 = mx_strdup(s1);
		return s3;
	}
	if (NULL != s1 && NULL != s2){
	int l1 = mx_strlen(s1);
	int l2 = mx_strlen(s2);
	char *s3 = mx_strnew(l1 + l2);
	s3 = mx_strcat(s3, s1);
	s3 = mx_strcat(s3, s2);
		return s3;
	}
return NULL;
}

//int main () {
//	char const *str1 = "this";
//	char const *str2 = "dodge ";
	//char *str3 = NULL;
//	printf("%s\n", mx_strjoin(str2, str1));
//}

