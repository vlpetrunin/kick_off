#include <stdbool.h>
#include "header.h"

bool mx_isspace(char c){
	if (((c > 8) && (c < 14)) || (c == 32)){
	return true;
	}
	else
	return false;
}
