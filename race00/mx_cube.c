#include <unistd.h>

void mx_printchar(char c);
void mx_cube(int n) {
        int diag = n / 2;
        int horiz = n * 2;
        int lenght = horiz + 2;
        int high = n + diag + 3;
	int b = high - 1;
	int d = diag + 1;
	int ad = d;
	int fg = diag;
		if (n > 1) {
	for (int i = 0; i != high; i++) {
	int horiz2 = horiz / 2;
		if (i == 0 || i == d || i == b) { //  DASHS
			if(i == 0) {                           //1 DASH
				for(int p = 0; p < d; p++) {
					mx_printchar(' ');
				}
			mx_printchar('+');
			for(int x = 0; x != lenght; x++) {
                        	mx_printchar('-');
			}
                	mx_printchar('+');
                }                     
		if (i == d) {                          //2 DASH
			mx_printchar('+');
			for(int x = 0; x != lenght; x++) {
			mx_printchar('-');
		}
		mx_printchar('+');
			for(int u = 0; u < diag; u++) {
				mx_printchar(' ');	
			}
			mx_printchar('|');
		}             
		if (i == b) {                          //3 DASH
		mx_printchar('+');
		for(int x = 0; x != lenght; x++) {
                        mx_printchar('-');
                }
                mx_printchar('+');
                }

	}
	if ((i != 0) && (i <= diag)) {                 // SLASHUS
		int zz = i;
		for(int u = 0; u < ad; u++) {
			mx_printchar(' ');
		}
		mx_printchar('/');
		for (int m = 0; m < lenght; m++) {
			mx_printchar(' ');
		}
		mx_printchar('/');
		if (i == 1) {
			mx_printchar('|');
		}
		if (zz > 1) {
			for(int z = 1; z < zz; z++) {
				mx_printchar(' ');
			}
			mx_printchar('|');
			}
		}
	if ((i > d) && (i < b)) {                      // TIRE VERTICAL
		mx_printchar('|');
		for(int y = -1; y <= horiz; y++) {
			mx_printchar(' ');
		}
		mx_printchar('|');
		if (i <= horiz2) {
			for (int h = 0; h < diag; h++) {
				mx_printchar(' ');
			}
			mx_printchar('|');
			}
		if (i == (horiz2 += 1)) {
			for(int xa = 0; xa < diag; xa++) {
				mx_printchar(' ');
			}
			mx_printchar('+');
			}
		if (i > horiz2) {
			for(int ba = 1; ba < fg; ba++) {
				mx_printchar(' ');
			}
			fg--;
			mx_printchar('/');
		}
	}
	mx_printchar('\n');
	--ad;
	}
}
}
