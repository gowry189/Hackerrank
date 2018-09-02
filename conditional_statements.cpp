#include<iostream>
using namespace std;
int main(){
    int n;
    std::cin >> n;
    string A[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    if(n>9)
    {cout<<A[0];}
    else
    {cout<<A[n];}
    return 0;

}
