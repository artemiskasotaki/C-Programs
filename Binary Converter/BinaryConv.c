#include <math.h>
#include <stdio.h>

int convert(long long n);

int main() {
    long long number;
    printf("Binary Number: ");
    scanf("%lld", &number);
    printf("The binaty %lld is %d in decimal", number, convert(number));
    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, remainder;
    
	while (n != 0) {
        remainder = n % 10;
        n /= 10;
        dec += remainder * pow(2, i);
        ++i;
    }
    return dec;
}
