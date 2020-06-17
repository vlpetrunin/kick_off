#include <stdio.h>

int mx_strcmp (const char *s1, const char *s2);
int mx_binary_search (char **arr, int size, const char *s, int *count) {
	int i = 0;
	int start = 0;
	int end = size;
	int mid = end / 2;
	if (size % 2 == 0)
		mid--;
	while (start <= end) {
	if (mx_strcmp(s, arr[mid]) > 0) {
		start = mid + 1;
		i++;
		}
	else if (mx_strcmp(s, arr[mid]) == 0 ) {
		i++;
		*count = i;
		return mid;
		}
	else{
		end = mid - 1;
		i++;
		}
	mid = (start + end) / 2;
	}
	if ( start > end) {
	*count = 0;
	return -1;
	}
return -1;
}
//int main (void) {
//	char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//	int count = 0;
//	printf("%d\n", mx_binary_search(arr, 6, "ab", &count));
//	printf("%d\n", count);
//}
