#include <iostream>
using namespace std;

int main()
{
    string username;
    string password;

    cout << "Enter Username: ";
    cin >> username;
    
    if (username == "Saksham" )
    {
        cout<<"Enter Password: ";
        cin>>password;

        if(password=="2026")
        {
          cout<<"Login Succesfull";
        }

        else{
            cout<<"Wrong Paasword";
        }
    }

    else{
        cout<<"Wrong Username";
    }
    return 0;
}