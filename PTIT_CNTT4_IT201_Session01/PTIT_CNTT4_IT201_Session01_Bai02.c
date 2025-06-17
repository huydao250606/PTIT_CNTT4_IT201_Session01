#include <stdio.h>

void printfDouble(int n) {
    int i= 1;
    while (i < n) {
        printf("%d\n", i);
        i *=2;
    }
}

int main() {
    printfDouble(20);
    return 0;
}
// do phuc tap: O(log n)