#include<iostream>

// palindromic pyramid

using namespace std;

int main() {

    cout<<"||PALINDROMIC TRIANGLE||"<<endl;

    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++) {
        int j;
        for(j=1 ; j<=n-i ; j++) {
            cout<<"  ";
        }
        int k=i;
        for(; j<=n ; j++) {
            cout<<k--<<" ";
        }
        k=2;
        for(; j<=n+i-1 ; j++) {
            cout<<k++<<" ";
        }
        cout<<endl;
    }


    return 0;
}