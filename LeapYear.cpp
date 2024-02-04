// Program to check whether a year is leap year or not
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Leap Year Program..."<<endl;

    int year;
    cout<<"\nEnter Year: | ";
    cin>>year;

    //check
    cout<<"\n\t -------------------------------"<<endl;
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        cout<<"\t Leap Year..."<<endl;
    else
        cout<<"\t Not a Leap Year..."<<endl;
    cout<<"\t -------------------------------"<<endl;

    cout<<"\n";
    return 0;
}