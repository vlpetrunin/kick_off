#include <unistd.h>

static void printchar (char c){
	write(1 , &c, 1);
}	
static int strlen (const char *s){
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return i;
}
static void printstr (const char *s){
        write(1, s, strlen(s));
}

int main(int argc, char *argv[]) {
	for(int i = 0; i < argc; i++) {
		if (i > 0) {
			printstr(argv[i]);
			printchar('\n');
		}
	
	}
}
