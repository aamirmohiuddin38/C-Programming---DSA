// Printing ASCII Values of a-z and A-Z
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"ASCII Values of A-Z and a-z"<<endl;

    char c;
    cout<<"\n\t ASCII Values of a-z"<<endl;
    cout<<"\t-------------------------------"<<endl;
    cout<<"\t Alphabet, Ascii value"<<endl;
    for(c='a'; c<='z'; c++){
        cout<<"\t "<< c <<", \t "<<(int)c<<endl;
    }

    cout<<"\n\t ASCII Values of A-Z"<<endl;
    cout<<"\t-------------------------------"<<endl;
    cout<<"\t Alphabet, Ascii value"<<endl;
    for(c='A'; c<='Z'; c++){
        cout<<"\t "<< c <<", \t "<<(int)c<<endl;
    }

    cout<<endl;
    return 0;
}