#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *dict[][2] = {"a", "b", "c", "d", "", ""};
    char word[80];
    int i;
    cout << "input: ";
    cin >> word;
    for (i = 0; *dict[i][0]; i++) {
        if(!strcmp(dict[i][0], word)) {
            cout << dict[i][1] << "\n";
        }
    }
    if (!*dict[i][0]) {
        cout << "not found";
    }
    return 0;
}