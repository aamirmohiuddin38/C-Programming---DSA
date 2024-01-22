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
    cout<<fixed<<setprecision(0);
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Basic Salary : \t "<<basic<<endl;
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Basic: \t\t| "<<setw(8)<<right<<basic<<endl;
    cout<<"\t DA: \t\t\t| "<<setw(8)<<right<<da<<endl;
    cout<<"\t HRA: \t\t\t| "<<setw(8)<<right<<hra<<endl;
    cout<<"\t Conveyance: \t\t| "<<setw(8)<<right<<conveyance<<endl;
    cout<<"\t Medical: \t\t| "<<setw(8)<<right<< medical<<endl;
    cout<<"\t Gross Salary: \t\t| "<<setw(8)<<right<<gross<<endl;
    cout<<"\t ESIC: \t\t\t| "<<setw(8)<<right<<esic<<endl;
    cout<<"\t Provident Fund: \t| "<<setw(8)<<right<<pf<<endl;
    cout<<"\t Net Before Tax: \t| "<<setw(8)<<right<<netPreTax<<endl;
    cout<<"\t TDS: \t\t\t| "<<setw(8)<<right<<tds<<endl;
    cout<<"\t ----------------------------------"<<endl;
    cout<<"\t Salary in Hand: \t| "<<setw(8)<<right<<finalSalary<<endl;
    cout<<"\t ----------------------------------"<<endl;

    cout<<"\n";
    return 0;
}