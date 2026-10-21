#include <iostream>
using namespace std;

int main()
{
    int choice, quantity, total = 0;

    cout << "----- FOOD MENU -----\n";
    cout << "1. Pizza  - Rs. 150\n";
    cout << "2. Burger - Rs. 80\n";
    cout << "3. Pasta  - Rs. 120\n";
    cout << "4. Momos  - Rs. 100\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch(choice)
    {
        case 1:
            total = 150 * quantity;
            cout << "You ordered Pizza\n";
            break;

        case 2:
            total = 80 * quantity;
            cout << "You ordered Burger\n";
            break;

        case 3:
            total = 120 * quantity;
            cout << "You ordered Pasta\n";
            break;

        case 4:
            total = 100 * quantity;
            cout << "You ordered Momos\n";
            break;

        default:
            cout << "Invalid choice";
    }

    if(choice >= 1 && choice <= 4)
        cout << "Total Bill = Rs. " << total;

    return 0;
}