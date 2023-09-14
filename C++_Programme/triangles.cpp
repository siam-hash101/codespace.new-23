#include<iostream>

using namespace std;

int main() {

    int rows,cols;

    cout<<"enter rows: ";
    cin>>rows;

    cout<<"enter columns: ";
    cin>>cols;

    int count=1;

    for(int i=1 ; i<=rows ; i++) {
        for(int j=1 ; j<=cols ; j++) {
        cout<<"| "<<count<<" |";
        count++;
        }
        cout<<endl;
    }

    for(int i=1 ; i<=rows ; i++) {
        for(int j=1 ; j<=cols ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}