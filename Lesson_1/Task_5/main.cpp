#include <iostream>
#include <cmath>

using namespace std;

void quadratic_equation(double a, double b, double c) {
    double dis = b * b - 4 * a * c;
    if (a == 0) {
        cout << "If a = 0, the equation becomes linear" << endl;
        return;
    }
    if (dis > 0) {
        double root1 = (-b + sqrt(dis)) / (2 * a);
        double root2 = (-b - sqrt(dis)) / (2 * a);
        cout << "Roots: " << root1 << " and " << root2 << endl;
    } else if (dis == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        cout << "No real roots" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    quadratic_equation(a, b, c);

    return 0;
}
