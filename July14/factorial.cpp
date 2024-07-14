#include <iostream>
using namespace std;

void fact(int n);

int main() {
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a valid number." << endl;
    } else {
        fact(n);
    }
    return 0;
}

void fact(int n) {
    long long factorial = 1; 
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial << endl;
}
