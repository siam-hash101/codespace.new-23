#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    int result=0;
    for(int i=1 ; i<=n ; i++) {
        result+=i;
    }
    return result;
}
int32_t main() {
    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<sum(n)<<endl;
}