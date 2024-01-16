// Working with Floating Point Numbers and displaying in different formats - BEGINNER
#include <iostream>
#include <math.h>
#include <iomanip>
// #include <typeinfo>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Floating Point Numbers\n"<<endl;

    //Declare float type variable
    float fnum;
    cout<<"Enter fnum: ";
    cin>>fnum;

    //Display in various formats
    cout<<"\t Various formats:...."<<endl;
    cout<<"\t -----------------------"<<endl;
    cout<<"\t Default fnum = "<<fnum<<endl;
    // cout<<"\t Type of fnum: "<<typeid(fnum).name();
    cout<<"\t Type 1 = "<<fixed<<setprecision(1)<<fnum<<endl;
    cout<<"\t Type 2 = "<<fixed<<setprecision(2)<<fnum<<endl;

    cout<<endl;
    return 0;
}