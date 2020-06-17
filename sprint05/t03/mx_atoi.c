bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char* str) {
	long long num = 0;
	int sign = 1;
	for (; mx_isspace(*str); str++);
	if (*str == '-' || *str == '+') {
		sign = *str == '-' ? -sign : sign;
		str++;
	}
	for (; *str; str++) {
		if (!mx_isdigit(*str)) {
			break;
		}
		if ((num * 10) + (*str - '0') < num) {
			return sign == -1 ? 0 : -1;
		}
		num = (num * 10) + (*str - '0');
	}
	return sign == -1 ? -num : num;
}
