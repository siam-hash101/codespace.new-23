// programme to find whether a three digit number is an armstrong number or not.. 

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cout<<"enter number: ";
    cin>>n;
    int sum=0;
    int originalN=n;

    while(n>0) {
        int lastDigit=n%10;
        sum+=pow(lastDigit,3);
        n=n/10;

    }
    if(sum==originalN) {
        cout<<"Armstrong Number"<<endl;
    }
    else {
        cout<<"Not Armstrong Number"<<endl;
    }
    

        return 0;
    }    

    
