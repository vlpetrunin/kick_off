#include <stdlib.h>
#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
	int i = 0;
	char *temp;
	char *space = " ";
	if (words != NULL){
		char *result = mx_strjoin(words[0], space);
		for (i = 1; words[i] != NULL; i++){
			if (words[i + 1] != NULL) {
				temp = mx_strjoin(words[i], space);
				result = mx_strjoin(result, temp);
				mx_strdel(&temp);
			}
			else 
				result = mx_strjoin(result, words[i]);
		}
	char *dota = result;
	mx_strdel(&result);
	return dota;
	}
return NULL;
}

int main(){
	char *words[] = {"Free", "your", "mind.", "asd", "asd", "asd", NULL};
	char *temp = mx_concat_words(words);
	printf("%s", temp);
	system("leaks -q io");
}
