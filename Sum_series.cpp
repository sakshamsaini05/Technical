#include <iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}