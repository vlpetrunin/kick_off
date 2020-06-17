#include<stdbool.h>
#include<stdio.h>
bool mx_isalpha(int c){
	if ((c > 64) && (c < 91)){
	return 0;
	}
	else if ((c > 96) && (c < 123))
	return 1;
return 0;
}

