#include<iostream>
using namespace std;

int fact(int n) {
    int factorial=1;
    for(int i=2 ; i<=n ; i++) {
        factorial*=i;
    }
    return factorial;
}

int main() {
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;

    int result=fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr="<<result<<endl;
}