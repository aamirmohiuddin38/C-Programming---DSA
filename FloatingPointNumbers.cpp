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

    //Int-Float compatibility
    int a, b;
    float fa, fb;
    cout<<"\n\t INT-FLOAT compatiblity..."<<endl;
    cout<<"\t---------------------------------------"<<endl;

    a = 2;
    fa = a;
    fb = fa * 2;
    b = fb;

    cout<<"\t a = "<<a<<endl;
    cout<<"\t fa = "<<fa<<endl;
    cout<<"\t fb = "<<fb<<endl;
    cout<<"\t b = "<<b<<endl;

    // FLOOR, CEIL and ROUND Functions
    float fx = 3.14;
    cout<<"\n\t FLOOR CEIL and ROUND function"<<endl;
    cout<<"\t ---------------------------------------"<<endl;
    cout<<"\tDefault fx = "<<fx<<endl;
    cout<<"\tFloor fx = "<<floor(fx)<<endl;
    cout<<"\tCeil fx = "<<ceil(fx)<<endl;
    cout<<"\tRound fx = "<<round(fx)<<endl;

    cout<<endl;
    return 0;
}