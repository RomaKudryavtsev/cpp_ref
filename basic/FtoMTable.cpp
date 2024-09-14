#include <iostream>
using namespace std;

int main () {
    double foots, meters;
    const double meters_in_foot = 3.28;
    int counter = 0;
    for (double f = 1; f <= 100; f++) {
        foots = f;
        meters = foots / meters_in_foot;
        cout << f << " foots is " << meters << " meters\n";
        counter++;
        if (counter == 10) {
            cout << "\n";
            counter = 0;
        }
    }
    return 0;
}