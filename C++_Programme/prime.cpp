#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main() {

/*    int n;
    cout<<"enter number: ";
    cin>>n;

    bool flag=0;

    for(int i=2 ; i<=sqrt(n) ; i++) {
        if(n%2==0) {
            cout<<"non-prime"<<endl;
            flag=1;
            break;
        }  
    }
    
    if(flag==0) {
        cout<<"prime"<<endl;
    }
*/

    int a,b;
    cout<<"enter num1: ";
    cin>>a;
    cout<<"enter num2: ";
    cin>>b;

    for(int i=a ; i<=b ; i++) {
        if(isPrime(i)) {
            cout<<i<<"\n";
        }
    }
    cout<<endl;

    return 0;
}

bool isPrime(int num) {
    for(int i=2 ; i<=sqrt(num) ; i++) {
        if(num%i==0) {
            return false;
        }
    }
    return true;
}
