// Pattern 2
#include <iostream>
using namespace std;

int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Pattern 2\n"<<endl;

    for(int row=9; row>=0; row--){
        for(int col=0; col<=row; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int row=10; row>=0; row--){
        for(int col=0; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}