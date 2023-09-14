#include<iostream>

using namespace std;

int main() {

    int rows,cols,height;

    cout<<"enter rows: ";
    cin>>rows;

    cout<<"enter columns: ";
    cin>>cols;

    cout<<"enter height: ";
    cin>>height;

    int count=1;

    for(int i=1 ; i<=rows ; i++) {
        for(int j=1 ; j<=cols ; j++) {
        cout<<"| "<<count<<" |";
        count++;
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1 ; i<=rows ; i++) {
        for(int j=1 ; j<=cols ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1 ; i<=height ; i++) {
        int space=height - i;
        for(int j=1 ; j<=space ; j++) {
            cout<<"  ";
        }
        for(int j=1 ; j<=i ; j++) {
            cout<<"* ";
        }
        for(int j=2 ; j<=i ; j++) {
            cout<<"* ";            
        }
        cout<<endl;
        
    }
    

    return 0;
}