#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N = 0;
    int x, y;
    int null_x = 0;
    int null_y = 0;
    double distance = 0;

    cout << "Enter radius(N)" << endl;
    cin >> N;
    cout << "Enter coordinate(x)" << endl;
    cin >> x;
    cout << "Enter coordinate(y)" << endl;
    cin >> y;

    distance = sqrt(pow(null_x - x , 2) + pow(null_y - y , 2) );

    cout << "Detector flashing frequency(distance)" << distance << endl;

    return 0;
}
