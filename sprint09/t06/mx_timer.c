#include <time.h>
#include <stdio.h>

double mx_timer(void (*f)()) {
    clock_t start;
    clock_t stop;

    while (f) {
        start = clock();
        f("qweqweqweqe");
        stop = clock();
        return (double)(stop - start)/CLOCKS_PER_SEC;
    }
    return -1;
}

void mx_strlen(const char *s){
	int i;
	for(i = 0; s[i] != '\0'; i++){
		printf("%c", s[i]);
	}
}

int main (){
	double a = mx_timer(mx_strlen);
	printf("%f\n", a);
}
