#include <iostream>

using namespace std;

int main(void) {

    //int rows,cols;
//
//
    //cout<<"enter row: ";
    //cin>>rows;
//
    //cout<<"enter column: ";
    //cin>>cols;
//
    //for(int i=0 ; i<rows ; i++) {
    //    for(int j=0 ; j<cols ; j++) {
    //        cout<<"*";
    //    }
    //    cout<<endl;
    //}
    //cout<<"\n";
    //cout<<"\n";
//
    int n;

    cin>>n;

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n-i ; j++) {
            cout<<"  ";
        }
        for(int j=1 ; j<=n ; j++) {
            cout<<"* ";
        }
        for(int j=2 ; j<=i ; j++) {
            cout<<"* ";
        }
        for(int j=2 ; j<=i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}