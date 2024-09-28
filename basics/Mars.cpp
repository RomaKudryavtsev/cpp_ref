#include <iostream>
using namespace std;

int main() {
    double distance, lightspeed, delay, delay_in_min;
    distance = 34000000;
    lightspeed = 186000;
    delay = distance / lightspeed;
    delay_in_min = delay / 60;
    cout << "delay sec: " << delay << "\n";
    cout << "delay min: " << delay_in_min;
    return 0;
}