//#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
	int len = mx_strlen(s2);
	int x = 0;
	for(int i = 0; i <= len; i++) {
		s1[i] = s2[x];
		x++;
}
return (char*)s1;
}
//int main () {
// const char *s = "foolwo";
//  char s1[7];
//  mx_strcat(s1, s);
// printf("%s", s1);
//}
