//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"DECISION MAKING ...\n"<<endl;

    //declaring variable
    int a, b;
    cout<<"Enter a: | ";
    cin>>a;
    cout<<"Enter b: | ";
    cin>>b;

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

    //?IF - ELSE IF-ELSE STATEMENT - comparing two numbers whether they are less, greater or equal
    cout<<"\n\t ------------------------------"<<endl;
    cout<<"\t IF-ELSE IF- ELSE Statement..."<<endl;
    cout<<"\t ------------------------------"<<endl;
    if (a < b)
    {
        cout<<"\t 'b' is GREATER"<<endl;
    }
    else if(a > b){
        cout<<"\t 'a' is GREATER"<<endl;
    }
    else{
        cout<<"\t 'a' and 'b' are equal | a = b |"<<endl;
    }

    cout<<endl;
    return 0;
}