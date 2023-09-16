// Armstrong number is a number where the sumation of each digit's cube
// is equal to that initial number  

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
    }else{
        cout<<"Not Armstrong"<<endl;
    }    

    return 0;
}