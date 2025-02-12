// Your code here...
#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    unsigned int mask = 1 << 31;
    int started = 0; 

    for (int i = 0; i < 32; i++) {
        if (n & mask) {
            started = 1; 
        }
        if (started) {
            printf("%d", (n & mask) ? 1 : 0);
        }
        mask >>= 1; 
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}