#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    
    int N; cin>>N;

    int arr[100][100];
    int garo=0, sero=0, cross = 0;
    int garotmp=0, serotmp=0;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            int N; cin>>N;
            arr[i][j] = N;
        }
    }

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            garotmp += arr[i][j];
            serotmp += arr[j][i];

            if(i==j){
                cross += arr[i][j];
            }
        }

        if(garo<=garotmp) {
            garo = garotmp;
        }
        garotmp =0;

        if(sero<=serotmp){
            sero = serotmp;
        }
        serotmp =0;
    }

    int result = max(garo , max(sero, cross));

    cout<<result;

}
