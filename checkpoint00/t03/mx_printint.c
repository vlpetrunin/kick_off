#include <unistd.h>
void mx_printint(int n) {
        int a[20];
    int i;
    if (n < 0) {
        n = -n;
        write(1, "-", 1);
    } else if (n == 0) {
        write(1, "0", 1);
    }
    for (i = 0; n != 0; i++) {
        a[i] = n % 10 + 48;
        n /= 10;
    }
    for (int j = i - 1 ; j >= 0; j--) {
        write(1, &a[j], 1);
    }
}
