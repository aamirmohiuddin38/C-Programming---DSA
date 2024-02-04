// Program to check whether a number is positive, negative or zero
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Positive | Negative | Zero"<<endl;

    int num;
    cout<<"\nEnter num: | ";
    scanf("%d", &num);

    //check conditions
    cout<<"\n\t -------------------"<<endl;

    if(num > 0) cout<<"\t Positive"<<endl;
    else if (num < 0) cout<<"\t Negative"<<endl;
    else cout<<"\t Zero"<<endl;

    cout<<"\t -------------------"<<endl;

    //using ternery operator
    (num>0) ? cout<<"\t +ive"<<endl : (num < 0) ? cout<<"\t -ive"<<endl : cout<<"\t Zero"<<endl;
    cout<<"\t -------------------"<<endl;

    cout<<"\n";
    return 0;
}