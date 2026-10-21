#include <iostream>
using namespace std;

int main()
{
    int choice, n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[100], b[100];

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\n--- Array Operations ---\n";
    cout << "1. Addition of two arrays\n";
    cout << "2. Subtraction of two arrays\n";
    cout << "3. Multiplication of two arrays\n";
    cout << "4. Find largest and smallest element\n";
    cout << "5. Calculate average of array elements\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter elements of second array:\n";
            for(int i = 0; i < n; i++)
                cin >> b[i];

            cout << "Addition: ";
            for(int i = 0; i < n; i++)
                cout << a[i] + b[i] << " ";
            break;

        case 2:
            cout << "Enter elements of second array:\n";
            for(int i = 0; i < n; i++)
                cin >> b[i];

            cout << "Subtraction: ";
            for(int i = 0; i < n; i++)
                cout << a[i] - b[i] << " ";
            break;

        case 3:
            cout << "Enter elements of second array:\n";
            for(int i = 0; i < n; i++)
                cin >> b[i];

            cout << "Multiplication: ";
            for(int i = 0; i < n; i++)
                cout << a[i] * b[i] << " ";
            break;

        case 4:
        {
            int large = a[0];
            int small = a[0];

            for(int i = 1; i < n; i++)
            {
                if(a[i] > large)
                    large = a[i];

                if(a[i] < small)
                    small = a[i];
            }

            cout << "Largest element = " << large << endl;
            cout << "Smallest element = " << small << endl;
            break;
        }

        case 5:
        {
            int sum = 0;

            for(int i = 0; i < n; i++)
                sum = sum + a[i];

            float average = (float)sum / n;

            cout << "Average = " << average;
            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}