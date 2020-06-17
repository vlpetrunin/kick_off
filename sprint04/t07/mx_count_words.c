int mx_count_words(const char *str, char delimiter) {
	int i;
	int words = 0;
	int x = 0;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == delimiter) {
			x = i;
		}
	}
	for(i = 0; i != x; i++) {
		if(str[i] == ' ' && str[i + 1] != ' ') {
			words++;
		}
	}
return words;
}
