//#include <stdio.h>
int mx_strcmp (const char *s1, const char *s2);
int mx_bubble_sort (char **arr, int size) {
	int numswap = 0;
	for (int i = 0; i < size ; i++) {
		for (int j = i + 1; j < size; j++) {
			if (mx_strcmp(arr[i], arr[j]) > 0) {
                        	char *temp = arr[i];
							arr[i] = arr[j];
                        	arr[j] = temp;
				numswap++;
			}
		}
	}
return numswap;
}
//int main (void) {
//	char *arr[4] = {"abc", "xyz", "ghi", "def"};
	//char *arr[3] = {"abc", "acb", "a"}; // Если будешь проверять второй вариант то меня размер в принтфе!!!!!
//	printf("%d", mx_bubble_sort(arr, 4));
//}
