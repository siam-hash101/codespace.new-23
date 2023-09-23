#include<iostream>
using namespace std;

int table(int n) {
    int tab;
    for(int i=1 ; i<=10 ; i++) {
        tab=n*i;
        cout<<tab<<endl;
    }
    return tab;
}

int main() {
    int n;
    cout<<"enter table of: ";
    cin>>n;
    
    cout<<table(n)<<endl;

    return 0;

}