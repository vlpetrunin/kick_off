int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s){
	int lenght = mx_strlen(s);
	int mid = lenght / 2;
	for(int s1 = 0;s1 <= mid;s1++){	
		if(lenght <= s1)
		break;
		lenght -= 1;
		mx_swap_char(&s[s1], &s[lenght]);
	}
}
