#include <iostream>
#include <cstdio>
using namespace std;
int largest(int, int, int, int);

int main() {
    int a, b, c, d;
    cin>> a >> b >> c >>d;
    int l = largest(a,b,c,d);
    cout<<l<<"\n";
    return 0;
}

int largest(int a, int b, int c, int d) {
    if(a > b && a > c && a > d) {
        return a;
    }
    if(b > a && b >c && b >d) {
        return b;
    }
    if(c > a && c >b && c >d) {
        return c;
    }
    if(d > a && d >b && d > c)  {
        return d;
    }
    return 0;
}
