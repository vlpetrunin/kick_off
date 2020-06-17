//#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow) {
	if (pow > 1) {
		return n * mx_pow_rec(n, (pow - 1));
	}
	return n;
}
//int main() {
//	printf("%f", mx_pow_rec(5, 4));
//}
