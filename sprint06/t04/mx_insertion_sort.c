//#include <stdio.h>

int mx_strlen (const char *s);
int mx_insertion_sort (char **arr, int size) {
	int numswap = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j > 0; j--) {
			if (mx_strlen(arr[j - 1]) > mx_strlen(arr[j])) {
				char *temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				numswap++;
			}
		}
	}
return numswap;
}
//int main (void) {
	//char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
//	char *arr[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
//	printf("%d\n", mx_insertion_sort(arr, 5));
//	for (int i = 0; i < 5; i++)
//	printf("%s\n", arr[i]);
//}
