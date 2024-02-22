// Program: Menu Driven< Calc using if else
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Menu Driven Calc..."<<endl;

    int num1, num2, choice;
    int repeat = 1;
while(repeat!=0){
    cout<<"\n Enter num1: | ";
    cin>>num1;
    cout<<" Enter num2: | ";
    cin>>num2;

//choices
    cout<<"\n\t-------------------------"<<endl;
    cout<<"\t Choose Option: "<<endl;
    cout<<"\t-------------------------"<<endl;
    cout<<"\t 1. Add"<<endl;
    cout<<"\t 2. Subtract"<<endl;
    cout<<"\t 3. Multiply"<<endl;
    cout<<"\t 4. Divide"<<endl;
    cout<<"\t 5. Exit"<<endl;
    cout<<"\t--------------------------"<<endl;
    cout<<"\t Enter Choice: | ";
    cin>>choice;

    //calculation
    cout<<"\t ---------------------------"<<endl;
    if(choice == 1) cout<<"\t Result | num1 + num2 =  "<< num1 + num2<<endl;
    else if (choice == 2) cout<<"\n\t Result | num1 - num2 =  "<< num1 - num2<<endl;
    else if (choice == 3) cout<<"\n\t Result | num1 * num2 =  "<< num1 * num2<<endl;
    else if (choice == 4) cout<<"\n\t Result | \n\t num1 / num2 (quotient) = "<<num1 / num2<<"\n\t num1 % num2 (remainer) = "<< num1 % num2<<endl;
    else if (choice == 5) cout<<"\n\t Thank You...."<<endl;
    else cout<<"\n\t Invalid Option.. "<<endl;
    cout<<"\t -----------------------------"<<endl;

    //Repeat
    cout<<"\nRepeat? 1-Yes | 0-No:- ";
    cin>>repeat;
}

    cout<<"\n";
    return 0;
}