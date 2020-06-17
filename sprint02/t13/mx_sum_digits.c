int mx_sum_digits(int num){
	int g = 0;
if(num < 0){
	num *= (-1);
	}
	while(num != 0){
	g += num % 10;
	num /= 10;	
	}
return g;
}
