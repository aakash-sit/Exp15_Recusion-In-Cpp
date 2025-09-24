// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 1 | n == 0)
        return 1;
    else
        return (n * fact(n - 1));  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << fact(num) << endl;
    }

    return 0;
}
