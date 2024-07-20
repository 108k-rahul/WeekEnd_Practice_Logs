#include <iostream>
using namespace std;

/* Armstrong: A number that is equal to the sum of the cubes of its digits. */

void isArm(int n);

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    isArm(n);
    return 0;
}

void isArm(int n) {
    int sum = 0;
    int original = n;

    while (n > 0) {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }    

    if (original == sum) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }
}
