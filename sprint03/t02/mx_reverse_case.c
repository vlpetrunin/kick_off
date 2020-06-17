#include<stdbool.h>
bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);
void mx_reverse_case(char *s){
	int n = 0;
	for(char x = *s;x != '\0';x = *(s + n)){
			if (mx_islower(x) != 0){
			mx_toupper(x);
			s[n] = mx_toupper(x);
	}
		else if (mx_isupper(x) != 0)
			s[n] = mx_tolower(x);
	n++;
	}
}
