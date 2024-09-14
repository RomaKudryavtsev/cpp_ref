#include <iostream>
#include <map>
using namespace std;

map<string, string> choices = {
    {"if", "if (<condition>) <statement>"},
    {"switch", "switch(<expression>): {case <constant>: <statement>; break}"}};

char get_choice(map<string, string> available_choices)
{
    cout << "choose number:\n";
    int counter = 1;
    char user_choice;
    for (auto [key, value] : available_choices)
    {
        cout << counter << ". " << key << "\n";
        counter++;
    }
    cout << "q for exit\n";
    cin >> user_choice;
    return user_choice;
}

void print_help(char user_choice)
{
    switch (user_choice)
    {
    case '1':
        cout << choices["if"] << "\n";
        break;
    case '2':
        cout << choices["switch"] << "\n";
        break;
    case 'q':
        cout << "exit\n";
        break;
    default:
        cout << "unknown\n";
        break;
    }
}

int main()
{
    char user_choice;
    do
    {
        user_choice = get_choice(choices);
        print_help(user_choice);
    } while (user_choice != 'q');

    return 0;
}