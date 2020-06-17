#include <stdio.h>
#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num){
        int temp = num;
        int len = 0;
        int nar = 0;
        while(temp != 0){
                temp = temp / 10;
                len++;
        }
        temp = num;
        while(temp != 0){
                nar = nar + mx_pow(temp%10, len);
                temp = temp / 10;
        }
        if(nar == num){
                return true;
        }
        else if(nar != num){
                return false;
        }
        return 0;
}
