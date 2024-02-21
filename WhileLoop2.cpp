//WhileLoop - calculate square of given number till user exits
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Squares till User Exits"<<endl;

    int repeat = 1, num;
    cout<<"\nEnter num: | ";
    cin>>num;
    cout<<"\n\t Square of num = "<<num*num<<endl;

    while(repeat!=0){
        cout<<"\nRepeat? 1-Yes | 0- No:-";
        cin>>repeat;
        if(repeat == 0) break;
        cout<<"\n\n Enter another num: |";
        cin>>num;
        cout<<"\n\t Square of num = "<<num*num<<endl;
    }

    cout<<endl;
    return 0;
}