// Program to reverse a 5 digit Number - Basic | BEGINNER LEVEL
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Reverse a 5 digit Number Program\n"<<endl;

    //Declaring variables
    int num, rem, rev = 0;

    cout<<"Enter any Five Digit Number: ";
    cin>>num;

    //Step1:
    rem = num % 10; //remainder
    rev = rev + (rem * 10000);  //multiplying by factor
    num = num / 10; //quotient
    cout<<"\n \tStep1--> Quotient: "<<num<<" | Remainer: "<<rem<<" | Reverse: "<<rev<<endl;

    //Step2:
    rem = num % 10; 
    rev = rev + (rem * 1000);  
    num = num / 10;
    cout<<"\tStep2--> Quotient: "<<num<<" | Remainer: "<<rem<<" | Reverse: "<<rev<<endl;

    //Step 3:
    rem = num % 10; 
    rev = rev + (rem * 100);  
    num = num / 10;
    cout<<"\tStep3--> Quotient: "<<num<<" | Remainer: "<<rem<<" | Reverse: "<<rev<<endl; 

    //Step 4:
    rem = num % 10;
    rev = rev + (rem * 10); 
    num = num / 10;
    cout<<"\tStep4--> Quotient: "<<num<<" | Remainer: "<<rem<<" | Reverse: "<<rev<<endl;

    //Step 5:
    rem = num % 10; 
    rev = rev + (rem * 1); 
    num = num / 10;
    cout<<"\tStep5--> Quotient: "<<num<<" | Remainer: "<<rem<<" | Reverse: "<<rev<<endl; 

    cout<<"\t -----------------------------------------------------"<<endl;
    cout<<"\t Reversed Number: "<<rev<<endl;
    cout<<"\t---------------------------------------------------------"<<endl;

    cout<<endl;
    return 0;
}