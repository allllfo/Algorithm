#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int T; cin>>T;

    for(int i=1; i<=T; i++){
        int N, L; cin>>N>>L;
        vector<pair<int,int> > food;
        int arr[N+1][L+1];

        for(int i=0; i<N; i++){
            int score, cal; cin>>score>>cal;
            food.push_back(make_pair(score,cal));
        }

        for(int i=1; i<=N; i++){
            for(int j=1; j<=L; j++){

                int curscore= food[i-1].first;
                int curcal = food[i-1].second;

                if(curcal<=j){
                    arr[i][j] = max(arr[i-1][j-curcal]+curscore, arr[i-1][j]);
                }
                else{
                    arr[i][j]=arr[i-1][j];
                }

            }
        }

        cout<<"#"<<i<<" "<<arr[N][L]<<"\n";




    }
}

/*
나열
칼로리 순서대로
1000 500
500 300
400 400
250 300
100 200

점수 순서대로
1000 500
400 400
250 300
500 300
100 200
*/