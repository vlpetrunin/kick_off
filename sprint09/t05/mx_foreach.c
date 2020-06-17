#include <unistd.h>

void mx_foreach(const int *arr, int size, void (*f)(int)){
    for (int i = 0; i < size; i++){
        f(arr[i]);
    }
}

static void printchar(char c){
write(1 , &c, 1);
}  
 
static void printint(int n) {
        int a[50];
    int i;
    if (n < 0) {
        n = -n;
        printchar('-');
    } else if (n == 0) {
        printchar('0');
    }
    for (i = 0; n != 0; i++) {
        a[i] = n % 10 + 48;
        n /= 10;
    }
    for (int j = i - 1 ; j >= 0; j--) {
        printchar(a[j]);
    }
}

int main (){
    int arr[5] = {1, 2, 3, 4, 5};
    mx_foreach(arr, 5, printint);
}
