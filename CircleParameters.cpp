//Program to find circle parameters - Circumference and Area
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Circle Parameters - Circumference & Area"<<endl;

    //Declaring Variables
    const float pi = 3.142;
    float rad, dia, cir, area;

    cout<<"\nEnter the Radius: ";
    cin>>rad;

    //Calculations
    dia = 2 * rad;
    cir = 2 * pi * rad;
    area = pi * rad * rad;

    //Results
    cout<<"\n\t Results..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    cout<<" \t Radius = \t\t| "<<rad<<endl;
    cout<<" \t Diameter = \t\t| "<<dia<<endl;
    cout<<" \t Circumference = \t| "<<cir<<endl;
    cout<<" \t Area = \t\t| "<<area<<endl;
    cout<<"\n";
    return 0;
}