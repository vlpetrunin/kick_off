#include <unistd.h>

void mx_printchar(char c);
void mx_pyramid(int n) {
        int tire = n * 2 - 3;
        int vert = n / 2;
        int front = n;
        int tire2 = n - 1;
        int o = -1;
        int cv = 0;
        int fg = vert - 1;
if ((n % 2) == 0 && n > 1) {
        for(int i = 0; i < n; i++) {
                for(int x = 1; x < front; x++) {
                        mx_printchar(' ');
                }
        mx_printchar('/');
        if (i == 0) {
                mx_printchar('\\');
        }
        if (i > 0 && i < tire2) {
                for(int xy = 0; xy < o; xy++) {
                        mx_printchar(' ');

                }
        mx_printchar('\\');
        }
	if (i < vert && i != 0) {
              for (int c = 0; c < cv; c++) {
                      mx_printchar(' ');
              }
              mx_printchar('\\');
        }
        if (i >= vert && i != tire2) {
                for(int m = 0; m < fg; m++) {
                        mx_printchar(' ');
                }
                fg--;
                mx_printchar('|');
        }
        if (i != tire2) {
                mx_printchar('\n');
        }
        if (i == tire2) {
                for(int y = 0; y < tire; y++) {
                        mx_printchar('_');
                }
                mx_printchar('\\');
                mx_printchar('|');
                mx_printchar('\n');
        }
                front--;
                o += 2;
                cv++;

        }
}
}
