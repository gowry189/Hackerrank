#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n; //Number of apples and oranges
    int a, b; //location of house of sam
    int s, t; //distances at which the apple and oranges fall
    int A[m], B[n];
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i = 0 ; i < m ; i++) {
        cin>>A[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cin>>B[i];
    }
    int s1 = 0, s2 = 0;
    for(int  i =0 ;i < m; i++) {
            if(A[i] + a >= s && A[i] + a <= t) {
                s1++;
            }
    }
    for(int  i = 0 ;i < n; i++) {
            if(B[i] + b >= s && B[i] + b <= t) {
                 s2++;
            }

    }
    cout<<s1<<"\n" <<s2;
    return 0;
}
