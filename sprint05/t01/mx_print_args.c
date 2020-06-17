#include <unistd.h>

void mx_printchar (char c);
int mx_strlen (const char *s);
void mx_printstr (const char *s);

int main (int n, char *arr[]) {
	for(int i = 0; i < n; i++) {
		if (i > 0) {
			mx_printstr(arr[i]);
			mx_printchar('\n');
		}
	
	}
}
