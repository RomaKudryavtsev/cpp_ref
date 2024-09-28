#include <iostream>
#include <cctype>

using namespace std;

void index_transform()
{
    int i;
    char str[80] = "This is a test";
    cout << "Source: " << str << "\n";
    for (i = 0; str[i]; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << "Result: " << str << "\n";
}

void pointers_transform()
{
    char *p;
    char str[80] = "This is a test";
    cout << "Source: " << str << "\n";
    p = str;
    while (*p)
    {
        if (isupper(*p))
        {
            *p = tolower(*p);
        }
        else if (islower(*p))
        {
            *p = toupper(*p);
        }
        p++;
    }
    cout << "Result: " << str << "\n";
}

void pointer_index_transform()
{
    char *p;
    int i;
    char str[80] = "This is a test";
    cout << "Source: " << str << "\n";
    p = str;
    for (i = 0; p[i]; i++) {
        if (isupper(p[i])) {
            p[i] = tolower(p[i]);
        } else if (islower(p[i])) {
            p[i] = toupper(p[i]);
        }
    }
    cout << "Result: " << str << "\n";
}

int main()
{
    index_transform();
    pointers_transform();
    pointer_index_transform();
    return 0;
}