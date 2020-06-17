void mx_str_reverse(char *s){
	int i;
        for(i = 0; s[i] != '\0'; i++) { 
	}
	int lenght = i;
	int mid = lenght / 2;
	for(int s1 = 0; s1 <= mid; s1++){	
		if(lenght <= s1)
		break;
		lenght -= 1;
		char x = *(&s[s1]);
        	*(&s[s1]) = *(&s[lenght]);
        	*(&s[lenght]) = x;
	}
}
