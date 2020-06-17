#include<unistd.h>
void mx_printchar(char c);
void mx_isos_triangle(unsigned int lenght, char c){
        unsigned int i;
        for(i = 1;i <= lenght; i++){
        	for(unsigned u = 0;u < i; u++)
			mx_printchar(c);
		mx_printchar('\n');
	}
}
