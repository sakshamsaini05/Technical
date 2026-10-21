//*****Scientific Calculator******

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b;
    int c;

    cout <<"****** Scientific Calculator *******";
    cout << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Sin" << endl;
    cout << "8. Cos" << endl;
    cout << "9. Tan" << endl;
    cout << "10. Log" << endl;
    cout << "11. Natural Log" << endl;
    cout << "12. Exit" << endl;
    cout << endl;

    do
    {

        cout << "Enter Your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Result:" << a / b << endl;

            else
                cout << "Not divisible by zero " << endl;
            break;

        case 5:
            cout << "Enter base and power: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;

        case 6:
            cout << "Enter number: ";
            cin >> a;

            if (a >= 0)
                cout << "Result = " << sqrt(a) << endl;
            else
                cout << "Invalid input!" << endl;
            break;

        case 7:
        {
            cout << "Enter angle in degree: ";
            cin >> a;
            float x = a * 3.14159 / 180;
            cout << "Sin(" << (a) << ")=" << sin(x) << endl;
            break;
        }

        case 8:
        {
            cout << "Enter angle in degree: ";
            cin >> a;
            float x = a * 3.14159 / 180;
            cout << "cos(" << (a) << ")=" << cos(x) << endl;
            break;
        }

        case 9:
        {
            cout << "Enter angle in degree: ";
            cin >> a;
            float x = a * 3.14159 / 180;
            cout << "tan(" << (a) << ")=" << tan(x) << endl;
            break;
        }

        case 10:

            cout << "Enter number: ";
            cin >> a;

            if (a > 0)
                cout << "Log = " << log10(a) << endl;
            else
                cout << "Invalid input!" << endl;
            break;

        case 11:
            cout << "Enter number: ";
            cin >> a;

            if (a > 0)
                cout << "Natural Log = " << log(a) << endl;
            else
                cout << "Invalid input!" << endl;

            break;

        case 12:
            cout << "Exiting Calculator..." << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
        }
    } while (c != 12);
    return 0;
}