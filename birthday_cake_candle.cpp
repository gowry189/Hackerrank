#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i =0 ;i < n ; i++) {
        cin >> A[i];
    }
   sort(A, A+n);
    int large  = A[n-1];
    int cnt = 0 ;
    for(int  i= 0 ;i < n ; i++ ) {
        if(A[i] == large)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
