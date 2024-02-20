//Program to print traingle of stars
#include <iostream>
#include <iomanip>

int main() {
    system("cls");
    std::cout<<"C++ | Programming"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Traingle of Stars\n"<<std::endl;

    int spaces = 11;
    for(int row = 0; row<10; row++){
        std::cout<<std::setw(spaces);
        for(int col = 0; col<=row; col++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
        spaces--;
    }
    std::cout<<std::endl;
    return 0;
}