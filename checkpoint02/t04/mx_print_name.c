#include <unistd.h>

static void printchar(char c){
write(1 , &c, 1);
}

static void printint(int n){
        int a[20];
    int i;
    if (n < 0) {
        n = -n;
        printchar('-');
    } else if (n == 0) {
        printchar('0');
    }
    for (i = 0; n != 0; i++) {
        a[i] = n % 10 + 48;
        n /= 10;
    }
    for (int j = i - 1 ; j >= 0; j--) {
        printchar(a[j]);
    }
}

static int strlen(const char *s){
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return i;
}
static void printstr(const char *s){
	write(1, s, strlen(s));
}

int main(int n, char *arr[]) {
	printstr(arr[0]);
	printchar('\n');
	printint(n);
	printchar('\n');
}	
