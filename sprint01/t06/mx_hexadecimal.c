#include<unistd.h>
void mx_printchar(char c);
void mx_hexadecimal(void){
        for(int x = 48; x < 58; x++){
                mx_printchar(x);
                }
        for(int x = 65; x < 71; x++){
                mx_printchar(x);
        }
mx_printchar('\n');
}
