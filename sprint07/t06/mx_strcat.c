//#include <stdio.h>
//#include <string.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
	int len = mx_strlen(s2);
	int len2 = mx_strlen(s1);
	int x = 0;
	for(int i = len2; x <= len; i++) {
		s1[i] = s2[x];
		x++;
}
return (char*)s1;
}

//int main () {
// const char *s = "foolwo ";
//  char s1[12] = "dota";
//  mx_strcat(s1, s);
//  printf("%s", mx_strcat(s1, s));
  //printf("%s", mx_strcat(s1, s));
//}

