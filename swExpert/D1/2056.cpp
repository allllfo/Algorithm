#include <iostream>
#include <cstring>
using namespace std;

int main(void){

    int N; cin>>N;
    int setting[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i=0; i<N; i++){

        string date; cin>> date;

        int month = atoi(date.substr(4,2).c_str());
        int day = atoi(date.substr(6,2).c_str());

        if(month > 12 || month ==0 || day == 0) { cout<<"-1"<<"\n";}

        else if(day>setting[month-1]) { cout<<"-1"<<"\n";}

        else {
            for(int i=0; i<8; i++){
                if(i ==4 || i == 6) {cout<<"/";}
                cout<<date[i];
            }
            cout<<"\n";
        }

    }
}