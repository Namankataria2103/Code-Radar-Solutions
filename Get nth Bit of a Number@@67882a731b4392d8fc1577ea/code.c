// Your code here...
#include <stdio.h>
void getNthBit(int num,int n) {
    int bit = (num>>n) & 1;
    printf("%d\n",bit);

}
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    getNthBit(num,n);
    return 0;
}