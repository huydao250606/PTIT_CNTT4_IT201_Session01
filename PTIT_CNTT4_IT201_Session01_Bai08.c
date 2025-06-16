#include <stdio.h>
int maxFreq(int a[], int n) {
    int cout[20] ={0};

    for(int i=0;i<n;i++) {
        cout[a[i]]++;
    }
    int max=0;
    for (int i=0;i<20;i++) {
        if(cout[i]>cout[max]) {
            max=i;
        }
    }
    return max;
}
int main() {
    int a[]={1,3,3,4,2,5,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int x=maxFreq(a,n);
    printf("phan tu xuat hien nhieu nhat: %d",x);
    return 0;
}