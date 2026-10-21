#include<iostream>
using namespace std;

int main(){
    
    int n;
    float credit,gradepoint;
    float Totalcredit=0;
    float Totalgradepoint=0;

    cout<<"Enter number of courses: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"\n course "<<i<<endl;
    

    cout<<"Enter credit: ";
    cin>>credit;

    cout<<"Enter grade point: ";
    cin>>gradepoint;

    Totalcredit=Totalcredit + credit;
   Totalgradepoint=Totalgradepoint + credit*gradepoint;
    }

    float CGPA = Totalgradepoint/Totalcredit;

    cout<<"\n Total Credits = "<<Totalcredit;
    cout<<"\n Total Grade Point  = "<<Totalgradepoint;
    cout<<"\n CGPA = "<<CGPA;
    return 0;
}