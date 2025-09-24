// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>

// Function to calculate the sum of numbers from 1 to n using recursion.
int sumUp(int n) {
    // Base case: If n is 0 or 1, the sum is n.
    if (n <= 1) {
        return n;
    } 
    // Recursive step: n + sum of numbers from 1 to n-1.
    return n + sumUp(n - 1);
}

int main() {
    int num;

    std::cout << "Enter a non-negative number: ";
    std::cin >> num;

    // Input validation to ensure a non-negative number is entered.
    if (num < 0) {
        std::cout << "Error: Sum is not defined for negative numbers." << std::endl;
        return 1; // Return a non-zero value to indicate an error.
    }

    int result = sumUp(num);
    std::cout << "Sum of numbers from 1 to " << num << " is " << result << std::endl;

    return 0;
}
