#include <unistd.h>
  
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int main(int argc, char *argv[]) {
	char s, eror;
	int i;
	for (i = 0; argv[0][i] != '\0'; i++) {
		if(argv[0][i] == '/') {
			s = argv[0][i + 1];
			eror = i;
		}
	}
	for (int x = 0; x <= eror; x++) {
		argv[0]++;
	}
	char *str = mx_strchr(argv[0], s);
	mx_printstr(str);
	mx_printchar('\n');
	argc = 1;
}

