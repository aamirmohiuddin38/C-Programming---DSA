//Program to print multiplication table of any given number
#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Multiplication Table"<<endl;

    int num, limit;
    cout<<"\nEnter Num: | ";
    cin>>num;
    cout<<"Enter Limit: | ";
    cin>>limit;

    cout<<"\n\tMultiplication Table of | "<<num<<endl;
    cout<<"\t-----------------------------"<<endl;
    for(int i = 0; i<limit; i++){
        cout<<"\t"<<num<<" * "<<setw(2)<<(i+1)<<" = "<<setw(3)<< num * (i+1) <<endl;
    }

    cout<<endl;
    return 0;
}