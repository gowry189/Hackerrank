#include<bits/stdc++.h>
using namespace std;
int main() {
    int A[3], B[3];
    for(int i =0 ;i < 3; i++) {
        cin>> A[i];
    }
    for(int i =0 ;i < 3; i++) {
        cin>> B[i];
    }
    int asum =0;
    int bsum = 0;
    int cnta=0,cntb =0;
    for(int i =0 ;i < 3; i++) {
        if(A[i]>B[i]) {
            asum++;
        } else if(B[i]>A[i]) {
            bsum++;
        } else {
            asum =asum;
            bsum = bsum;
        }
        if(asum>bsum) {
            cnta++;
        } else {
             cntb++;
        }
    }
    if(cnta>cntb) {
        cout<<asum<<" " <<bsum;
     } else {
        cout<<asum<< " " <<bsum;
    }

    return 0;
}
