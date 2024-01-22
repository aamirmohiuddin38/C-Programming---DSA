//Program to generate Salary Slip
#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Salary Slip"<<endl;

    //Declaring variables
    float basic, da, hra, conveyance, medical, gross;
    float esic, pf, netPreTax, tds, finalSalary;

    cout<<"\nEnter Basic Amount: ";
    cin>>basic;

    //calculations
    da = 0.1 * basic; //10% of basic
    hra = 0.5 * basic + da; //50% of basic + da
    conveyance = 1600; //fixed
    medical = 1250; //fixed
    gross = basic + da + hra + conveyance + medical;
    //deductions
    esic = 0.0475 * gross; //4.75% of gross
    pf = 0.12 * basic; //12% of gross
    netPreTax = gross - esic - pf;
    tds = 0.05 * netPreTax;
    finalSalary = netPreTax - tds;

    //display results
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Basic Salary : \t "<<basic<<endl;
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Basic: \t\t| "<<basic<<endl;
    cout<<"\t DA: \t\t\t| "<<da<<endl;
    cout<<"\t HRA: \t\t\t| "<<hra<<endl;
    cout<<"\t Conveyance: \t\t| "<<conveyance<<endl;
    cout<<"\t Medical: \t\t| "<< medical<<endl;
    cout<<"\t Gross Salary: \t\t| "<<gross<<endl;
    cout<<"\t ESIC: \t\t\t| "<<esic<<endl;
    cout<<"\t Provident Fund: \t| "<<pf<<endl;
    cout<<"\t Net Before Tax: \t| "<<netPreTax<<endl;
    cout<<"\t TDS: \t\t\t| "<<tds<<endl;
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Salary in Hand: \t| "<<finalSalary<<endl;
    cout<<"\t ----------------------------------"<<endl;

    cout<<"\n";
    return 0;
}