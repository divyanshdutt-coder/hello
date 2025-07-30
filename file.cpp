#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Check if the number is a 3-digit number
    if (number < 100 || number > 999) {
        cout << "Invalid input! Please enter a 3-digit number." << endl;
        return 1;
    }

    // Reverse the digits
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
