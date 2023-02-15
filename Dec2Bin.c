#include <math.h>
#include <stdio.h>
int convert(long long n);
long long convert2(int n1);
int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convert(n));
    int n1;
    printf("\n\nEnter a decimal number: ");
    scanf("%d", &n1);
    printf("\n%d in decimal = %lld in binary", n1, convert2(n1));
   
    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
long long convert2(int n1) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n1 != 0) {
        rem = n1 % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n1, rem, n1 / 2);
        n1 /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

