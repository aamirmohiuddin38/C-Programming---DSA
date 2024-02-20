// Program:- Cricket score status in the 2nd INNIngs....
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"SUPER OVER - 2nd Innings"<<endl;

    int toWin, runs, score = 0, ballsLeft, balls=6;
    float rr, avg;

    cout<<"\nEnter runs to win: | ";
    cin>>toWin;
    ballsLeft = balls;

    for(int ball = 1; ball<=balls && toWin > 0; ball++){
        cout<<"\n\nBall: "<<ball;
        cout<<" | Enter runs scord: ";
        cin>>runs;
        score += runs;
        toWin -= runs;
        ballsLeft--;
        avg = (float)score/ball;
        rr = (float)toWin/ballsLeft;
        cout<<"__________________________________"<<endl;
        cout<<"\n\t SCORE: "<<score<<" | RR: "<<rr<<" | Avg: "<<avg<<endl;
        if(!(toWin<0)){
            cout<<"\t IND need "<<toWin<<" runs in "<<ballsLeft<<" balls"<<endl;
        }
    }
    cout<<"\n\t---------------------------------------";
    if(toWin <= 0){
        cout<<"\n\tIND won the match with "<<ballsLeft<<" balls remaining."<<endl;
    }
    else if(toWin >= 2){
        cout<<"\n\tIND lost the match."<<endl;
    }
    else{
        cout<<"\n\tMatch TIED..."<<endl;
    }
    cout<<"\t---------------------------------------"<<endl;

    cout<<endl;
    return 0;
}