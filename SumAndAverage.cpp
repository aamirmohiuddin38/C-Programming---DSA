// Program to add 3 numbers and find their Average - BEGINNER LEVEL
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programing"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Sum & Average Program\n"<<endl;

    //Declaring variables
    int num1, num2, num3, sum, avg;

    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;

    // Perform sum and avg
    sum = num1 + num2 + num3;
    avg = sum/3;

    //Display results
    cout<<"\n\tResults: ..."<<endl;
    cout<<"\t-----------------------------"<<endl;
    cout<<"\t Given Numbers: | "<<num1<<", "<<num2<<", "<<num3<<endl;
    cout<<"\t Sum: | "<<sum<<endl;
    cout<<"\t Avg: | "<<avg<<endl;
    cout<<endl;

    return 0;
}