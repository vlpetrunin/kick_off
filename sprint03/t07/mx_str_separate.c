#include<unistd.h>
void mx_printchar(char c);
void mx_str_separate(const char *str, char delim){
        int n = 0;
        for(char i = *str;i != '\0';i = *(str + n)){
        char eror = i; //next symbol
        if(i != delim)
        {
          mx_printchar(i);
        }
        if(i == delim)
        {
          eror = *(str + n + 1);
            if(eror != delim)
              mx_printchar('\n');
        }
        n++;
}
mx_printchar('\n');
}
