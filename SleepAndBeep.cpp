// Sounds(Beep) and Delays(Sleep) functions
#include <iostream>
#include <windows.h>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"SLEEP AND BEEP\n"<<endl;

    for(int i = 0; i<10; i++){
        cout<<"\t "<<i<<endl;
        Beep(1000*i,200);
        Sleep(1000);
    }
    Beep(500, 200);

    cout<<endl;
    return 0;
}