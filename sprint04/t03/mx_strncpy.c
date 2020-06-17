char *mx_strncpy(char *dst, const char *src, int len) {
	int i2 = 0;
	int i;
	for(i = 0; i < len; i++) {
		dst[i2] = src[i];
		i2++;
	}
return (char*)dst;
}
