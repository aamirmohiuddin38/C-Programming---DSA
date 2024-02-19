//Cricket Score status of ist innings of a super over
#include <iostream>
using namespace std;
int main(void){
    system("cls");
    cout<<"C++ | Programming"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"SUPER OVER: Ist Innings"<<endl;

    float balls = 0.6, avg;
    int score = 0, runs, max=0;

    for(float ball=0.1; ball<=balls; ball = ball + 0.1){
        cout<<"\n\nBall: "<<ball<<" | ";
        cout<<" Enter runs scored: | ";
        cin>>runs;
        score += runs;
        avg = (float)score/(ball*10);
        if(runs>max) max = runs;
        cout<<"\n\t------------------------------------"<<endl;
        cout<<"\t| SCORE: "<<score<<" | AVG: "<<avg<<" | MAX: "<<max<<" |"<<endl;
        cout<<"\t--------------------------------------"<<endl;
    }

    cout<<"\n\t TO WIN: | "<<score+1<<endl;

    cout<<endl;
    return 0;
}