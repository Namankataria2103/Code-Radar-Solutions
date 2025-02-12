// Your code here...
#include <stdio.h>

int countTrailingZeros(int n) {
    return __builtin_ctz(n); // GCC built-in function
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countTrailingZeros(n));
    return 0;
}