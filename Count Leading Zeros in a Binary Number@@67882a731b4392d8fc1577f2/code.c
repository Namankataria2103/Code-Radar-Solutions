// Your code here...
#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return 32;  // All bits are 0
    return __builtin_clz(num); // GCC built-in function
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countLeadingZeros(num));
    return 0;
}