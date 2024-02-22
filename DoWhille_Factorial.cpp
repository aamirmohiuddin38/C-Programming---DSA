// Calculate factorial of a number
//Generate a Fibonacci Series till to given limit
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Factorial of a Number"<<endl;

    int num, fact = 1, temp;
    cout<<"\n Enter Num: | ";
    cin>>num;
    temp = num;

    if(num==0) cout<<"\n\t Factorial of "<<num<<" is : | "<<fact<<endl;
    else{
        do{
            fact = fact * num;
            num--;
        } while(num>0);
        cout<<"\n\t Factorial of "<<temp<<" is : | "<<fact<<endl;
    }

    cout<<endl<<endl;
    return 0;
}