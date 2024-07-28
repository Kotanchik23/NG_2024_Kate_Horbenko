#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double number1, number2, result;

    cout << "Select operation:\n";
    cout << "1. Sum '+' \n";
    cout << "2. Differencen '-'\n";
    cout << "3. Multiplication '*'\n";
    cout << "4. Division '/' \n";
    cout << "5. Square \n";
    cout << "6. Square root \n";
    cout << "Choice: ";
    cin >> choice;

    cout << "Enter number(s): ";
    if (choice >= 1 && choice <= 4) {
        cin >> number1 >> number2;
    } else if (choice == 5 || choice == 6) {
        cin >> number1;
    }

    switch(choice) {
    case 1:
        result = number1 + number2;
        break;
    case 2:
        result = number1 - number2;
        break;
    case 3:
        result = number1 * number2;
        break;
    case 4:
        if (number2 != 0) {
            result = number1 / number2;
        } else {
            cout << "Error: division by zero!" << endl;
        }
        break;
    case 5:
        result = number1 * number1;
        break;
    case 6:
        if (number1 >= 0) {
            result = sqrt(number1);
        } else {
            cout << "Error: negative number!" << endl;
        }
        break;
    }
    cout << "Results: " << result << endl;

    return 0;
}
