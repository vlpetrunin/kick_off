#include <stdbool.h>
#include <stdio.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    if (x && arr) {
        for (int i = 0; i < size; i++) {
            if (compare(arr[i], x))
                return i;
        }
    }
    return -1;
}


// bool equal(int a, int b){
// 		return a == b;
// 	}

// int main () {
// 	int arr[5] = {1, 2, 3, 4, 5};
// 	int a = mx_comparator(arr, 5, 3, equal);
// 	printf("%d", a);
// }
