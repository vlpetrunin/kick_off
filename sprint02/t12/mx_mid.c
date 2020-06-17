int mx_mid(int a, int b, int c){
	if(((a > b) && (a < c)) || ((a < b) && (a > c))){
	return a;
	}
	else if (((a < b) && (b < c)) || ((a > b) && (b > c)))
	return b;
	else if (((c < a) && (b < c)) || ((a < c) && (b > c)))
	return c;
return 0;
}
