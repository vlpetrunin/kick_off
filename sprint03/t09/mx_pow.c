#include<stdio.h>
double mx_pow(double n, unsigned int pow){
	double result = 1;
	for(unsigned int i = pow; i != 0; i--)
		{
		if(pow == 0)
			{
			return 1;
			}
		result *= n; 
		}
	return result;
}
int main(){
	printf("%f", mx_pow(2.5, 3));
}
