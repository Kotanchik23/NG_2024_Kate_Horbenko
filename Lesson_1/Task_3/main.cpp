#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "Skilki deneg" << endl;
    cin >> salary;

    if (salary < 1000) {
        cout << "Rabotat bolshe!\n";
    }
    if (salary > 999) {
        if (salary > 999999) {
            cout << "Da tu milioner!\n";
        }
        if (salary < 1000000) {
            cout << "Good working!\n";
        }
    }

    cout << "Ny tu molodetc!" << endl;


    return 0;
}
