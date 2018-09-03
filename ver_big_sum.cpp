#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n;
    cin>> n;
    long long A[n];
    for(int i =0 ;i < n ;i ++) {
        cin>> A[i];
    }
    long long sum =0 ;
    for(int i =0 ;i < n ; i++) {
        sum += A[i];
    }
    cout<< sum;
}
