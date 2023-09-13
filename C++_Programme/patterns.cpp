#include<iostream>

using namespace std;

int main() {

    int height;

    cout<<"enter height: ";
    cin>>height;

// inverted pyramid

    for(int i=height ; i>=1 ; i--) {
        for(int j=1 ; j<=i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

// 180 degree rotated pyramid

    for(int i=1 ; i<=height ; i++) {
        for(int j=1 ; j<=height ; j++) {
            if(j<=height-i) {
                cout<<"  ";
            }else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
// normal pyramid

    //for(int i=1 ; i<=height ; i++) {
    //    for(int j=i ; j<=height ; j++) {
    //        if(j<=height-i) {
    //            cout<<" ";
    //        }else {
    //            cout<<"* ";
    //        }
    //    }
    //    cout<<endl;
    //}

// pattern for a rhombus

    for(int i=1 ; i<=height ; i++) {
        for(int j=1 ; j<=height ; j++) {
            if(j<=height-i) {
                cout<<"  ";
            }else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    for(int i=height ; i>=1 ; i--) {
        for(int j=1 ; j<=i ; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

// pyramid number pattern

    for(int i=1 ; i<=height ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

// floyed's triangle

    int count=1;

    for(int i=1 ; i<=height ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}