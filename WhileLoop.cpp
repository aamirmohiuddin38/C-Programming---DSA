// WhileLoop -  Sum of even numbers upto a given number
#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Sum of Even Numbers upto 'n'"<<endl;

    int n,num=0,sum=0;
    cout<<"\nEnter max: | ";
    cin>>n;

    cout<<"\n\t Sum of Even numbers upto: | "<<n<<endl;
    cout<<"\t ------------------------------------"<<endl;

    while(num<=n){
        if(num%2==0){
            sum += num;
            cout<<"\t Sum upto: "<<setw(2)<<num<<" | "<<setw(3)<<sum<<endl;
        }
        num++;
    }
    cout<<"\t ------------------------------------"<<endl;


    cout<<endl;
    return 0;
}