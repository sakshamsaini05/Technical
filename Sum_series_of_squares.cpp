#include <iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        sum = sum + i * i;
    }

    cout << "Sum of squares = " << sum;

    return 0;
}