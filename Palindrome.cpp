#include <stdio.h>
int main() {
  int n, s=0, r, t;
    printf("Enter an integer: ");
    scanf("%d", &n);
    t = n;

   
    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    
    if (t == s )
        printf("%d is a palindrome.", t);
    else
        printf("%d is not a palindrome.", t);

    return 0;
}
