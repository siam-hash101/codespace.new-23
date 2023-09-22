#include<iostream>
using namespace std;

int main() {

    int waveLength,amplitude;

    cout<<"enter the wavelength of the wave: ";
    cin>>waveLength;
    cout<<"enter the amplitude of the wave: ";
    cin>>amplitude;

    for(int i=1 ; i<=amplitude ; i++) {
        for(int j=1 ; j<=waveLength ; j++) {
            if(((i+j)%4!=0) || (i==2 && j%4==0)) {
                cout<<".";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}