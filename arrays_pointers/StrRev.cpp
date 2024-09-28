#include <iostream>
#include <cstring>

using namespace std;

void res() {
    char str[] = "this is test";
    char *start, *end;
    int len;
    char start_val;
    len = strlen(str);
    start = str;
    end = &str[len - 1];
    while (start < end) {
        start_val = *start;
        *start = *end;
        *end = start_val;
        start++;
        end--;
    }
    cout << str;
}

int main() {
    char str[] = "this is test";
    char *start, *end;
    int len = strlen(str);
    start = str;
    end = start + len - 1;
    while (start <= end) {
        char end_val = *end;
        char start_val = *start;
        *start = end_val;
        *end = start_val;
        end--;
        start++;
    } 
    cout << str << "\n";
    res();
    return 0;
}