#include <stdbool.h>
#include "header.h"

bool mx_isdigit(int c){
	if ((c > 47) && (c < 58)){
	return 1;
	}
	else 
	return 0;
}
