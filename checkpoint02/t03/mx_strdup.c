#include <stdlib.h>

static char *strcpy(char *dst, const char *src){
int i = 0;
while(src[i]){
dst[i] = src[i];
i++;
}
dst[i] = '\0';
return dst;
}

static int strlen(const char *s){
    int i;
    for(i = 0; s[i] != '\0'; i++);
    return i;
}

static char *strnew(const int size){
  char *A = malloc(size +1);
  if(A != NULL && size > 0) {
    for (int i = 0; i < size + 1; i++){
       A[i] = '\0';
       }
       return A;
    }
    return NULL;
}

char *mx_strdup(const char *str){
    int i = strlen(str);
    char *str2 = strnew(i);
    strcpy(str2, str);
return str2;
}
