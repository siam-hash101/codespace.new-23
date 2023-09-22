#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int num) {
    int count=0;
    while(num>0) {
        num/=10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum=num;
    int sum=0;
    int numOfDigit=countDigit(num);

    while(num>0) {
        int lastDigit=num%10;
        sum+=pow(lastDigit,numOfDigit);
        num=num/10;
    }
    return sum==originalNum;
}

int main() {
    int lowerlimit,upperlimit;
    cout<<"Set the lower limit: ";
    cin>>lowerlimit;
    cout<<"Set the upper limit: ";
    cin>>upperlimit;

    cout<<"Armstrong number between "<<lowerlimit<<" and "<<upperlimit<<" is: ";

    for(int i=lowerlimit ; i<=upperlimit ; i++) {
        if(isArmstrong(i)) {
            cout<<i<<" ";
        }

    }
    cout<<endl;
}