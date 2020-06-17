#include <unistd.h>
#include "header.h"

void mx_printchar(char c);
void mx_printint(int n) {
        int a[20];
    int i;
    if (n < 0) {
        n = -n;
        mx_printchar('-');
    } else if (n == 0) {
        mx_printchar('0');
    }
    for (i = 0; n != 0; i++) {
        a[i] = n % 10 + 48;
        n /= 10;
    }
    for (int j = i - 1 ; j >= 0; j--) {
        mx_printchar(a[j]);
    }
}
