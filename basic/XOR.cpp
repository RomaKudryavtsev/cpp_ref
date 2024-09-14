#include <iostream>
#include <cmath>

using namespace std;

bool get_xor(bool p, bool q)
{
    return (p || q) && !(p && q);
}

void print_xor(bool p, bool q)
{
    cout << p << " XOR " << q << " = " << get_xor(p, q) << "\n";
}

int main()
{
    int p, q;
    for (p = 0; p <= 1; p++)
    {
        for (q = 0; q <= 1; q++)
        {
            print_xor(p, q);
        }
    }
    return 0;
}
