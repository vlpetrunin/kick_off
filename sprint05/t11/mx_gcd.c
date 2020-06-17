//#include <stdio.h>

int mx_gcd(int a, int b) {
	if (b != 0)
	return mx_gcd(b, a % b);
	if (a > 0)
	return a;
	if (a < 0)
	return a * -1;
return 0;
}
//int main() {
//	printf("%d", mx_gcd(20, 15));
//}
