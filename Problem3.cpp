#include <iostream>

using namespace std;

void generateSeries(int x) {
    if (x <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return;
    }

    int currentNumber = 1;

    for (int i = 1; i <= x; i++) {
        cout << currentNumber << " ";
        currentNumber += 2;
    }

    cout << endl;
}

int main() {
    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    int count = (x + 1) / 2; // Calculate the number of terms to generate based on the pattern

    generateSeries(count);

    return 0;
}
