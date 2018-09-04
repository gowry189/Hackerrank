#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    int A[n];
    for(int i = 0; i < n; i++) {
        cin>> A[i];
    }
    float neg = 0, pos = 0, zero = 0;
    for(int i = 0 ; i < n ; i++) {
        if( A[i] > 0) {
            pos++;
        } else if(A[i] < 0 ){
            neg++;
         } else
            zero++;
    }
    float posans = 0.00, negans = 0.00, zeroans = 0.00;
    posans = pos/n;
    cout<<posans<<"\n";
    negans = neg/n;
    cout<<negans<<"\n";
    zeroans = zero/n;
    cout<<zeroans;
}
