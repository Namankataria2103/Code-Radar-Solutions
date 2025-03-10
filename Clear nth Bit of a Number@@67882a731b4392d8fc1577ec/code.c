#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d\n", clearNthBit(num, n));
    return 0;
}
