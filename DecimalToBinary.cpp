// Program to convert a DECIMAL number to BINARY
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"DECIMAL to BINARY"<<endl;

    int num, bit, rem;
    cout<<"\nEnter Num: | ";
    cin>>num;
    int origNum = num;

    cout<<"\n\t Binary eq. of "<<origNum<<" is: | Bottom to top:"<<endl;
    cout<<"\t------------------------------------------"<<endl;
    if(num == 0) cout<<"\t 0"<<endl;

    while(num!=0){
        rem = num % 2;
        cout<<"\t "<<rem<<endl;
        num = num / 2;
    }

    cout<<endl;
    return 0;
}