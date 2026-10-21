#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        s[i] = s[i] + 1;
    }

    cout << "New string: " << s;

    return 0;
}