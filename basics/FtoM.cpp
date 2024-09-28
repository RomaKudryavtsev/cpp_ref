#include <iostream>
using namespace std;

int main() {
    const double metersInFoots = 3.28;
    double foots;
    cout << "give me foots:\n";
    cin >> foots;
    cout << "foots: " << foots << " meters: " << foots / metersInFoots;
    return 0;
}