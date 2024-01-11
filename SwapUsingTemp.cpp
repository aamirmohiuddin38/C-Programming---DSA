// Program to swap the value of two variables using third variable(temp)
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Swap Using Temp variable Program\n"<<endl;

    //Declaring variables
    int num1, num2, temp;

    cout<<"Enter First Number (num1): ";
    cin>>num1;
    cout<<"Enter Second Number (num2)";
    cin>>num2;

    //Before swapping
    cout<<"\n\t Before Swapping: "<<endl;
    cout<<"\t------------------------------"<<endl;
    cout<<"\t First Number (num1): | "<<num1<<endl;
    cout<<"\t Second Number (num2): | "<<num2<<endl;

    //Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    //After Swapping
    cout<<"\n\t After Swapping: "<<endl;
    cout<<"\t------------------------------"<<endl;
    cout<<"\t First Number (num1): | "<<num1<<endl;
    cout<<"\t Second Number (num2): | "<<num2<<endl;

    cout<<endl;
    return 0;
}