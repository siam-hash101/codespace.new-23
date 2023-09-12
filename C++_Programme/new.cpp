#include <iostream>

using namespace std;

int main(void) {

    int rows,cols;


    cout<<"enter row: ";
    cin>>rows;

    cout<<"enter column: ";
    cin>>cols;

    for(int i=0 ; i<rows ; i++) {
        for(int j=0 ; j<cols ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n";

    return 0;
}