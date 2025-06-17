#include <stdio.h>
// cach 1: O(n)
int sumLoop(int n) {
    int sum = 0;
    for (int i=1 ;i<=n;i++) {
        sum+=i;
    }
    return sum;
}
// cach 2: O(1)
int sum(int n) {
    return n*(n+1)/2;
}
int main() {
    printf("%d",sumLoop(5));
    printf("%d",sum(3));
    return 0;
}