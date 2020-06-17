#include<unistd.h>

void mx_printchar (char c);
int mx_strlen (const char *s);
void mx_printstr (const char *s);
int mx_strcmp (const char *s1, const char *s2);

int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		for (int j = 1; j < argc; j++) {
      			if (mx_strcmp(argv[i], argv[j]) < 0) {
        		char *temp = argv[i]; 
        		argv[i] = argv[j];
        		argv[j] = temp;
			}
		}
	}
	for(int x = 1; x < argc; x++) {
	mx_printstr(argv[x]);
	mx_printchar('\n');		
	}
}

