#include "get_address.h"

char *mx_get_address(void *p){
	int x = (int) &p;
	x *= -1;
	char *temp = mx_nbr_to_hex(x);

	int temp_lenght = mx_strlen(temp_result);
	int lenght = temp_lenght + 2;

	char *result = mx_strnew(lenght);
	result[0] = '0';
	result[1] = 'x';
	for (int i = 2; i < lenght; i++){
		result[i] = temp_result[i - 2];
	}
	return result;
}

/*int main(void){
	char str[6] = "Hello";
	char *a = mx_get_address(str);
	printf("%s\n", a);
}*/
