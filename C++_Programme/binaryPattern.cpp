#include<iostream>

using namespace std;

int main() {

    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=i ; j++) {
            if((i+j)%2==0) {
                cout<<"1 ";
            }else if((i+j)%2!=0) {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    for(int i=1 ; i<=n ; i++) {
        int space=n-i;
        for(int j=1 ; j<=space ; j++) {
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++) {
            if((i+j) %2==0) {
                cout<<"1 ";
            }else if((i+j) %2!=0) {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

cout<<endl;

// rhombus pattern

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n-i ; j++) {
            cout<<"  ";
        }
        for(int j=1 ; j<=n ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

cout<<endl;
// number pyramid pattern

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n-i ; j++) {
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
    }
