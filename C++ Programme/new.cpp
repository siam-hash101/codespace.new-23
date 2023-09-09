#include <iostream>

using namespace std;

int main(void) {

    int a;

    cout<<"enter a: ";
    cin>>a;

    if(a%2==0 && a%3==0) {
        cout<<"done\n";
    }
    else{
        cout<<"wrong\n";
    }

    return 0;
}