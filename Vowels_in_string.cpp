#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = 0;

    cout << "Enter a string: ";
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
           s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }

    cout << "Vowels = " << count;

    return 0;
}