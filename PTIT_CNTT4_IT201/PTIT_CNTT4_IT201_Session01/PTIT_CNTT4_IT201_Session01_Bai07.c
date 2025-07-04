#include <stdio.h>

int main() {
    int a[]={1,2,6,3,2,5};
    int check =0;
    int n=sizeof(a)/sizeof(a[0]);
    // cach 1: O(n^2)
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                printf("phan tu %d bi trung\n",a[i]);
                check++;
            }
        }
    }
    if (check==0) {
        printf("Khong co phan tu trung lap\n");
    }
    // cach 2: O(n)
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-1-i;j++) {
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]==a[i+1]) {
            printf("phan tu %d bi trung lap\n",a[i]);
        }
    }
    return 0;
}