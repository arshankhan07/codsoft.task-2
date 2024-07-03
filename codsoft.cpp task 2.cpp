#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! Invalid operation.";
            break;
			}
			}
