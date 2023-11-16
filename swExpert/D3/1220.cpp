#include <iostream>
using namespace std;

int main(void){
    
    int N; cin>>N;

    int table[100][100];
    int cnt =0;
    bool check1 = false, check2 = false;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            int num; cin>>num;
            table[i][j]=num;
        }
    }

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(table[j][i] == 1){
                check1 = true;
            }

            if(check1 == true && table[j][i] ==2){
                check2 = true;
            }

            if(check1 == true && check2 == true){
                cnt ++;
                check1 = false;
                check2 = false;
            }
        }

        check1 = false;
        check2 = false;
    }

    cout<<cnt;

}

/*
윗부분에 2, 아랫부분에 1 있는 경우 사라짐
열에 하나만 있는 경우 사라짐

"1 2" 가 존재해야함
*/