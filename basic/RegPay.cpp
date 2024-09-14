#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double get_val(string str)
{
    double val;
    cout << str << "\n";
    cin >> val;
    return val;
}

double calc_payment(double principal, double interest, double payments_num, double years_num)
{
    return (interest * (principal / payments_num)) / 
        (1 - pow(((interest / payments_num) + 1), -1 * (payments_num * years_num)));
}

int main()
{
    double principal = get_val("input principal:");
    double interest = get_val("input interest:");
    double payments_num = get_val("input annual payments number:");
    double years_num = get_val("input years number:");
    cout << "payment: " << calc_payment(principal, interest, payments_num, years_num); 
    return 0;
}