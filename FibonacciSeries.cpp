//Generate a Fibonacci Series till to given limit
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Fibonacci Series"<<endl;

    int a = 0, b = 1, c, max;
    cout<<"\n Enter max: | ";
    cin>>max;

    cout<<"\n\t Fibonacci Series till : | "<<max<<endl;
    cout<<"\t---------------------------------------"<<endl;
    cout<<"\t 0, 1";
    c = a + b;

    while(c<=max){
        cout<<", "<<c;
        a = b;
        b = c;
        c = a + b;
    }

    cout<<endl<<endl;
    return 0;
}