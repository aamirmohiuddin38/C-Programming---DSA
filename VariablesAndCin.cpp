#include <iostream>
using namespace std;

int main(){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Variables And cin object\n"<<endl;

    //Declaration of Variables
    int intNum;
    float floatNum;
    double doubleNum;
    bool TrueOrFalse;

    //Scanning values from user
    cout<<"Enter integer Number: ";
    cin>>intNum;

    cout<<"Enter Floating Number: ";
    cin>>floatNum;

    cout<<"Enter Double Number: ";
    cin>>doubleNum;

    cout<<"Enter Boolean value: ";
    cin>>TrueOrFalse;

    // Results;
    cout<<"\tResults:"<<endl;
    cout<<"\t-----------------------------"<<endl;
    cout<<"\tThe Value of Integer = "<<intNum<<endl;
    cout<<"\tThe value of Floating Point NUmber = "<<floatNum<<endl;
    cout<<"\tThe double value = "<<doubleNum<<endl;
    cout<<"\t10The Boolean value = "<<TrueOrFalse<<endl;

    return 0;
}