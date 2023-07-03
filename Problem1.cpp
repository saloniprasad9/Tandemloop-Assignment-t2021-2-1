#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
    }
};

int main() {
    double num1, num2;
    string operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the type of operation (+, -, *, /): ";
    cin >> operation;

    Calculator calc(num1, num2);

    double result;
    if (operation == "+") {
        result = calc.add();
    } else if (operation == "-") {
        result = calc.subtract();
    } else if (operation == "*") {
        result = calc.multiply();
    } else if (operation == "/") {
        result = calc.divide();
    } else {
        cout << "Invalid operation." << endl;
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}