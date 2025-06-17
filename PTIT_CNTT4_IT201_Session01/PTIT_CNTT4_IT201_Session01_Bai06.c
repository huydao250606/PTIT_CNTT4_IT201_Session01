#include <stdio.h>
int SoLanXuatHien(int a[],int n,int x) {
    int count=0;
    for(int i=0;i<n;i++) {
        if(a[i]==x) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[]={1,2,3,2,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int x=2;
    int result=SoLanXuatHien(a,n,x);
    printf("Phan tu %d xuat hien %d lan",x,result);
    return 0;
}