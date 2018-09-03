#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int A[n][n];
    for(int i =0 ;i < n; i ++ ) {
        for (int j =0 ;j< n ; j++) {
            cin>> A[i][j];
        }
    }
    int diasum  = 0;
     for(int i =0 ;i < n; i ++ ) {
        for (int j =0 ;j< n ; j++) {
            if(i== j) {
                diasum += A[i][j];
            }
        }
     }
    int offdiasum =0;
    for(int i =0 ;i < n; i ++ ) {
        for (int j =0 ;j< n ; j++) {
            if(i+j == n-1) {
                offdiasum += A[i][j];
            }
        }
    }
    int total = abs(diasum - offdiasum);
    cout<< total;
}
