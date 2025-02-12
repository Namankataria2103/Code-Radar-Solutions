// Your code here..
#include <stdio.h>
void checkMSB(int num) {
    int msb = num & (1<<31);
    if (msb)
        printf("Set\n");
    else
        printf("Not Set\n");

}
int main() {
    int num;
    scanf("%d",&num);
    checkMSB(num);
    return 0;
}