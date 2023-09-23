/*check if the given three numbers are
pythagorean triplet or 
not */

#include<bits/stdc++.h>
using namespace std;

int check(int x, int y, int z) {
    int a=max(x,max(y,z));
    int b,c;

    if(a==x) {
        b=y;
        c=z;
    }
    else if(a==y) {
        b=x;
        c=z;
    }
    else {
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c) {
        return true;
    }
    else {
        return false;
    }
}
int32_t main() {
    int x,y,z;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    cout<<"enter z: ";
    cin>>z;

    if(check(x,y,z)) {
        cout<<"Pythagorean Triplet"<<endl;
    }
    else {
        cout<<"Not a pythagorean triplet"<<endl;
    }
}