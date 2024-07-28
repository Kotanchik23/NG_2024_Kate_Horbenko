#include <iostream>

using namespace std;

void drawtree (int row){
    cout << endl;
    for (int i = 1; i <= row; ++i) {
        for (int j = 1; j <= row - i; ++j)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << "*";
        cout << endl;
    }
    for (int i = 1; i < row; ++i)
        cout << " ";
    cout << "*" << endl;
}
int main()
{
    int row = 0;
    cout << "Enter size: ";
    cin >> row;
    drawtree(row);
    return 0;
}
