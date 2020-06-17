#include "nbr_to_hex.h"

static void swap_char(char *s1, char *s2){
	char x = *(s1);
	*(s1) = *(s2);
	*(s2) = x;
}

static int strlenn(const char *s) {
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return i;
}

static void str_reverse(char *s){
	int lenght = strlenn(s);
	int mid = lenght / 2;
	for(int s1 = 0;s1 <= mid;s1++){	
		if(lenght <= s1)
		break;
		lenght -= 1;
		swap_char(&s[s1], &s[lenght]);
	}
}

char *mx_nbr_to_hex(unsigned long nbr) {
	unsigned long nbr2 = nbr;
	int lenght = 1;
	int temp, i = 0;
	while((nbr2 / 10) > 1){
		nbr2 /= 10;
		lenght++;
	}
	char *string = mx_strnew(lenght);
	while(nbr != 0){
		temp = nbr % 16;
		if(temp < 10)
			string[i] = 48 + temp;
		else
			string[i] = 87 + temp;
		nbr /= 16;
		i++;
	}
	str_reverse(string);
	return string;
}

/*int main(void) {
	unsigned long temp = 10000;
	char *a = mx_nbr_to_hex(temp);
	printf("%s", a);
}*/
