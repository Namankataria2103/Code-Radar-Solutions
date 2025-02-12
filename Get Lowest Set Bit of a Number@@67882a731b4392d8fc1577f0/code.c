// Your code here...
#include <stdio.h>

int getLowestSetBit(int num) {
    if (num == 0) return -1;  // No set bits
    return __builtin_ctz(num); // GCC built-in function
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", getLowestSetBit(num));
    return 0;
}