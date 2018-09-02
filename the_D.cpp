#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int s = n;
    for(int i =1 ;i <= (n/2)+1 ; i++) {
        for( int j = 1 ;j < s -1  ; j++ ) {
            cout<< "*";
            s--;
        }
        for( int k =1  ; k <= 2*i - 1 ;k++) {
        cout<< "D";
        }
        for(int l = (n/2) + i ; l < 2*n/2  ; l++) {
            cout<<"*";
        }

        cout<<"\n";
    }
    s = 1;
    for( int i =1; i<= (n/2);i++) {
         for(int k =1 ;k<=s;k++) {
            cout<<"*";
        }
        for(int j = 1 ;j <= 2 * ((n/2) +1- i) -1 ; j++){
        cout<<"D";
        }
        for(int l = 0; l< i ; l++) {
            cout<<"*";

        }
        cout<<"\n";
        s++;

    }
	return 0;
}
