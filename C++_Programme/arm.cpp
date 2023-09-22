#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of digits in a given number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum+=pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int lowerLimit, upperLimit;
    cout << "Enter the lower limit: ";
    cin >> lowerLimit;
    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    cout<<"Armstrong numbers between "<<lowerLimit<< " and " <<upperLimit<< " are:\n";

    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout<<endl;

    return 0;
}
