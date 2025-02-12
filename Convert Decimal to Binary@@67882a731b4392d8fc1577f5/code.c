// Your code here...
#include <stdio.h>

void printBinary(int n) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printBinary(n);
    return 0;
}