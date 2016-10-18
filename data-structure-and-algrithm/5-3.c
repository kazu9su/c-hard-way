#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    int i;
    for (i=a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            break;
        }
    }

    return i;
}

int main(void) {
    int a = 8;
    int b = 12;

    printf("%dと%dの最大公約数は、%dです", a, b, gcd(a, b));
}
