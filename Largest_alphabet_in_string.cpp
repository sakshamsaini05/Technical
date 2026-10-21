#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    char large = s[0];

    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] > large)
        {
            large = s[i];
        }
    }

    cout << "Largest alphabet: " << large;

    return 0;
}