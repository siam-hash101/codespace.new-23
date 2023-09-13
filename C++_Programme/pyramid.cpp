#include<iostream>

using namespace std;

int main() {

    int height;

    cout<<"enter pyramid height: ";
    cin>>height;

    for(int i=height ; i>=1 ; i--) {
        for(int j=1 ; j<=i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1 ; i<=height ; i++) {
        for(int j=1 ; j<=height ; j++) {
            if(j<height-i) {
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}