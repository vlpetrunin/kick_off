#include "hex_to_nbr.h"
static double pow(double n, unsigned int pow){
    if(pow == 0){
        return 1;
    }
    double result = 1.0;
    unsigned int i;
    for(i=1; i<=pow; i++){
        result *= n;
    }
    return result;
}
unsigned long mx_hex_to_nbr(const char *hex){
	int len, val;
	unsigned long decimal = 0;
    for(int i=0; hex[i]!='\0'; i++){
        len = i;
    }
    for(int i=0; hex[i]!='\0'; i++)
    {
        if(mx_isdigit(hex[i]))
        {
            val = hex[i] - 48;
        }
        else if(mx_isalpha(hex[i]) && mx_islower(hex[i]))
        {
            val = hex[i] - 97 + 10;
        }
        else if(mx_isalpha(hex[i]) && mx_isupper(hex[i]))
        {
            val = hex[i] - 65 + 10;
        }
        decimal += val * pow(16, len);
        len--;
    }
    return decimal;
}

/*int main()
{
	char str[] = "ffffffffffff";
	unsigned long num = mx_hex_to_nbr(str);
	printf("%lu\n", num);
	return 0;
}*/
