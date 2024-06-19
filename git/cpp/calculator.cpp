// Script: calculator.cpp
// Implements a simple calculator

#include <iostream>
#include <climits>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    if (b == 0) {
        return INT_MAX;  
    }
    return a / b;
}

int main() {
    int num1, num2;
    char op;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result;
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    if(result==INT_MAX){
     cout << "Error: Division by zero" << endl;
    }

    else{
     cout << "Result: " << result << endl;}  

    return 0;
}
