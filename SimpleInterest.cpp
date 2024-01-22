//Program to find Simple Interest
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Simple Interest Program"<<endl;

    //Declare variables
    float principal, rate, time, si, tds, finalAmount;

    cout<<"\nEnter Principle: ";
    cin>>principal;
    cout<<"Rate of Interest: ";
    cin>>rate;
    cout<<"No.Of Years: ";
    cin>>time;

    //calculations
    si = principal * rate * time / 100;
    tds = 0.1 * si; //10% of si
    finalAmount = principal + si - tds;

    //Display results
    cout<<"\t ---------------------------------"<<endl;
    cout<<"\t Simple Interest..."<<endl;
    cout<<"\t ---------------------------------"<<endl;
    cout<<"\t Principle: \t\t | "<<principal<<endl;
    cout<<"\t Rate Of Interst: \t | "<<rate<<endl;
    cout<<"\t No. Of Years: \t\t | "<<time<<endl;
    cout<<"\t Simple Interest: \t | "<<si<<endl;
    cout<<"\t TDS(10% of SI): \t | "<<tds<<endl;
    cout<<"\t Interest After Tax: \t | "<<si - tds<<endl;
    cout<<"\t Final Amount: \t\t | "<<finalAmount<<endl;
    cout<<"\t ------------------------------------"<<endl;

    cout<<"\n";
    return 0;
}