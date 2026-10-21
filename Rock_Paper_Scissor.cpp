#include<iostream>
using namespace std;

int main(){
    
    int user,com;

    cout<<"Rock Paper Scissor Game\n";
    cout<<"1. Rock\n";
    cout<<"2. Paper\n";
    cout<<"3. Scissor\n";

    cout<<"Enter your choice: ";
    cin>>user;

    cout<<"Enter computer choice: ";
    cin>>com;
    cout<<endl;

    cout<<"User choice: "<<user<<endl;
    cout<<"Computer choice: "<<com<<endl;

    if(user==com){
        cout<<"Draw";
    }

    else if(user==1 &&com==3){
        cout<<"Rock beats Scissors"<<endl;
        cout<<"You win!!";
    }

    else if(user==2 &&com==1){
        cout<<"Paper beats Rock"<<endl;
        cout<<"You win!!";
    }
    else if(user==3 &&com==2){
        cout<<"Scissors beats Paper"<<endl;
        cout<<"You win!!";
    }

    else{
        cout<<"Computer win!!";
    }


    return 0;
}