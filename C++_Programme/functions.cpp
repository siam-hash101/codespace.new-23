#include<iostream>
using namespace std;

void print(int num) {
    cout<<num<<" ";
    return;
}

int add(int num1, int num2) {
    print(num1);
    print(num2);
    int sum=num1+num2;
    return sum;
}

int main() {
    int a,b;
    cout<<"enter num1: ";
    cin>>a;
    cout<<"enter num2: ";
    cin>>b;
    cout<<add(a,b)<<endl;

    return 0;
}