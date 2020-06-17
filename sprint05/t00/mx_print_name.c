#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(int n, char *arr[]) {
	mx_printstr(arr[0]);
	mx_printchar('\n');
	mx_printint(n);
	mx_printchar('\n');
}	
