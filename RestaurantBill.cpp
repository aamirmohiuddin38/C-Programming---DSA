// Restaurant Bill Program - exploring cout object
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls"); //clear console

    cout<<setw(40)<<"ZEWA(KFC)"<<endl;
    cout<<setw(45)<<"    KASHMIR FOOD CENTER"<<endl;
    cout<<"-----------------------------------------------------------------------------\n"<<endl;

    cout<<"________________________________________________________________________"<<endl;
    cout<<"| Bill To: "<<setw(60)<<" Bill No: A001390\t|"<<endl;
    cout<<"| AYATHMULLA "<<setw(60)<<" Date: 03-01-2024\t|"<<endl;
    cout<<"| 6005899633 "<<setw(60)<<" TimeStamp: 03-01-2024 05:45:32 PM\t|"<<endl;
    cout<<"|_______________________________________________________________________|"<<endl;
    cout<<"_______________________________________________________"<<endl;
    cout<<"| S.No | \t Description \t | Qty | Rate |\tAmount |"<<endl;
    cout<<"|______|_________________________|_____|______|________|"<<endl;
    cout<<"| 1    | BIRYANI CHICKEN HALF \t |  1.0|  130 |     130|"<<endl;
    cout<<"|      |                         |     |      |        |"<<endl;
    cout<<"| 2    | DC30                 \t |  1.0|   30 |      30|"<<endl;
    cout<<"|______|_________________________|_____|______|________|"<<endl;
    cout<<"|      |                              SubTotal|     160|"<<endl;
    cout<<"|______|______________________________________|________|"<<endl;
    
    cout<<"\n\nBANK DETAILS:"<<endl;
    cout<<"ACC NO: *********0012"<<endl;
    cout<<"Mobile No: 0002223334"<<endl;
    cout<<"IFSC: JAKA0KASH\n"<<endl;

    cout<<"\t\t\t\t Thanks Visit Again "<<endl;
    cout<<"-------------------------------------------------------------------------------\n"<<endl;


    return 0;
}