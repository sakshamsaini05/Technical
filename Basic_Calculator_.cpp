// *****Basic calculator*******


#include<iostream>
using namespace std;

int main(){
    float a, b;
    char c;
    cout<<"**************Basic Cal;culator****************"<<endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> c;

    switch(c){
        case '+':
            cout << "Result: " << a + b;
            break;

        case '-':
            cout << "Result: " << a - b;
            break;

        case '*':
            cout << "Result: " << a * b;
            break;

        case '/':

            if(b!=0)
                cout<<"Result:"<<a/b;

            else
            cout<<"Not divisible by zero ";

            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}