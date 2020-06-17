int mx_strncmp(const char *s1, const char *s2, int n) {
        int i2 = 0;
        for(int i1 = 0; i1 != n; i1++, i2++) {
                if(s1[i1] != s2[i2]) {
                        return (s1[i1] - s2[i2]);
                        break;
                }
        }
return 0;
}
