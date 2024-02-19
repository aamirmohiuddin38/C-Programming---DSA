// For Loop - syntax and examples
#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
	system("cls");
	cout<<"C++ | Programming"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"For Loop - Syntax and Examples"<<endl;

    int i; //iterator or variable for iterations
    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Incrementing by 1 | Ascending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(i=0; i<10; i++){
        cout<<"\t "<<i<<endl;
    }

    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Incrementing by 2 | Ascending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(i=0; i<10; i=i+2){
        cout<<"\t "<<i<<endl;
    }

    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Decrementing by 1 | Descending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(i=10; i>0; i--){
        cout<<"\t "<<i<<endl;
    }

    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Decrementing by 2 | Descending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(i=10; i>0; i=i-2){
        cout<<"\t "<<i<<endl;
    }

    // Examples of type float
    float j;
    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Incrementing by 0.1 | Ascending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(j=0; j<=1; j = j + 0.1){
        cout<<"\t "<<j<<endl;
    }

    cout<<"\n\t--------------------------------------"<<endl;
    cout<<"\t Incrementing by 0.05 | Ascending Order"<<endl;
    cout<<"\t--------------------------------------"<<endl;
    for(j=0; j<=1; j = j + 0.05){
        cout<<"\t "<<fixed<<setprecision(2)<<j<<endl;
    }


	cout<<endl;
	return 0;
}