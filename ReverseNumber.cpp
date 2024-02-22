// Reverse a number with any number of digits and check if its is pallindrome
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Reverse a Number"<<endl;

    int num, rem, rev=0;
    cout<<"\nEnter num: | ";
    cin>>num;
    int origNum = num;

    while(num!=0){
        rem = num % 10;
        rev = rem + (rev*10);
        num = num / 10;
    }

    cout<<"\n\t Reverse of "<<origNum<<" is: | "<<rev<<endl;
    if(rev == origNum) cout<<"\t It is a PALINDROME..."<<endl;
    else cout<<"\t NOT a Palindrome"<<endl;

    cout<<endl;
    return 0;
}