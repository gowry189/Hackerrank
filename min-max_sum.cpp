#include<bits/stdc++.h>
using namespace std;
int main(){
    long long A[5];
    for(int i =0 ;i < 5 ; i++) {
        cin >> A[i];
    }
    long long minsum = 0 ;
    long long maxsum = 0 ;
    sort(A, A+5);
    for(int i = 0; i< 5-1 ; i++) {
        minsum += A[i];
    }
    for(int i = 1; i < 5 ; i++) {
        maxsum += A[i];
    }
    cout<<minsum<<" " <<maxsum;
    return 0;
}
