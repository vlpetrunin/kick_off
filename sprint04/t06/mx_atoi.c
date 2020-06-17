#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
	int a = 0;
	int i = 0;
	while(mx_isspace(*str) == 1) str++;
	while (*str) {
		if(mx_isdigit(*str)) {
			a = a *10 + *str - 48;
			i++;
		}
		else if (i > 0) return a;
		else 
		return 0;
		str++;
	}	
	return 0;
}	
