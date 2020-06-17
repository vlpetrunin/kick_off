//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
	int i, j, min, result = 1;
	for(i = 0; i < size - 1; i++){
		min = i;
		for(j = i + 1; j < size; j++){
			if(mx_strlen(arr[j]) < mx_strlen(arr[min])){
				min = j;
			}
				if(mx_strlen(arr[j]) == mx_strlen(arr[min])){
					if(mx_strcmp(arr[j], arr[min]) < 0 ) {
				min = j;
					}
				}
		}
	char* temp = arr[min];
	arr[min] = arr[i];
	arr[i] = temp;
	result++;
	}
return result;
}

//int main (void) {
//	char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
//	printf("%d", mx_selection_sort(arr, 7));
//}
