// Pattern 1
#include <iostream>
#include <windows.h>
using namespace std;

int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Pattern 1\n"<<endl;

    for(int row=0; row<10; row++){
        for(int col=0; col<=row; col++){
            Beep(1000*(col+1), 200);
            Sleep(200);
            cout<<col+1<<" ";
        }
        cout<<endl;
        Beep(500,100);
        Sleep(500);
    }

    cout<<endl;

    for(int row=0; row<10; row++){
        for(int col=0; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    return 0;
}