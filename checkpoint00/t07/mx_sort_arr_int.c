void mx_sort_arr_int(int *arr, int size) {
	for(int i = 1; i < size; ++i) {
		int x = i;
		while(x > 0 && arr[x - 1] > arr[x]) {
			int tmp = arr[x - 1]; 
			arr[x - 1] = arr[x];
			arr[x] = tmp;
			x -= 1;
		}
	}
}
