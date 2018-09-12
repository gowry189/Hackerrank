#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n >> k;
    int A[n];
    for(int i =0 ; i < n ; i++) {
        cin>>A[i];
    }
    int cnt;
    for(int i =0; i < n ; i++) {
        for(int j = i +1; j< n; j++) {
            if((A[i]+A[j])%k == 0)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}