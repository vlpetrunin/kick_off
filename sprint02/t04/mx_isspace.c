#include<stdbool.h>
bool mx_isspace(char c){
	if (((c > 8) && (c < 15)) || (c == 32)){
	return true;
	}
	else
	return false;
}
