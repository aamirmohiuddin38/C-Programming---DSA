//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"DECISION MAKING ...\n"<<endl;

    //declaring variable
    int a;
    cout<<"Enter a: | ";
    cin>>a;

    //?IF STATEMENT - checking whether 'a' is even, if even, print 'a' and if not then do nothing
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a % 2 == 0)
    {
        cout<<"\t 'a' is EVEN"<<endl;
    }

    //?IF - ELSE STATEMENT - checking whether 'a' is even or odd
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a % 2 == 0)
    {
        cout<<"\t 'a' is EVEN"<<endl;
    }
    else{
        cout<<"\t 'a' is ODD"<<endl;
    }

    cout<<endl;
    return 0;
}