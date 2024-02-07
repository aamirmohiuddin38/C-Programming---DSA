// Switch Case Statement - Calc Program
#include <iostream>
using namespace std;
int main(void){
	system("cls");
	cout<<"C++ | Programming "<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Switch case - Calc"<<endl;

    int num1, num2, choice;
    cout<<"\nEnter num1: | ";
    cin>>num1;
    cout<<"Enter num2: | ";
    cin>>num2;

    cout<<"\n\t Menu Options..."<<endl;
    cout<<"\t --------------------------"<<endl;
    cout<<"\t 1. Add"<<endl;
    cout<<"\t 2. Sub"<<endl;
    cout<<"\t 3. Multiply"<<endl;
    cout<<"\t 4. Divide"<<endl;
    cout<<"\t 5. Exit"<<endl;

    cout<<"\n\t Enter Option: | ";
    cin>>choice;
    cout<<"\n\t RESULT....\n"<<endl;
    cout<<"\t ---------------------------------------------"<<endl;
    switch(choice){
        case 1:
            cout<<"\t Add: num1 + num2 = "<<num1 + num2<<endl;
            break;
        case 2:
            cout<<"\t Sub: num1 - num2 = "<< num1 - num2<<endl;
            break;
        case 3:
            cout<<"\t Add: num1 * num2 = "<< num1 * num2<<endl;
            break;
        case 4:
            cout<<"\t Divide | Quotient: num1 / num2 = "<< num1 / num2<<endl;
            cout<<"\t Divide | Remainder: num1 % num2 = "<< num1 % num2<<endl;
            break;
        case 5:
            cout<<"\t Thank You...."<<endl;
            break;
        default:
            cout<<"\t Invalid option entered..."<<endl;
            break;
    }
    cout<<"\t ---------------------------------------------"<<endl;    

	cout<<"\n";
	return 0;
}