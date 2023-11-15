#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    int T; cin>>T;

    for(int t=1; t<=T; t++){

        int N, K; cin>>N>>K;
        int V[N], C[N];
        int arr[101][1001]={0,};

        for(int i=0; i<N; i++){

            int v, c; cin>>v>>c;
            V[i]=v;
            C[i]=c;
        }

        for(int i=1; i<=N; i++){
            for(int j=1; j<=K; j++){
                
                if(V[i-1]<=j){
                    arr[i][j] = max(arr[i-1][j-V[i-1]]+C[i-1], arr[i-1][j]);
                }
                else{
                    arr[i][j] = arr[i-1][j];
                }
            }
        }

        cout<<"#"<<t<<" "<<arr[N][K]<<"\n";


    }

}