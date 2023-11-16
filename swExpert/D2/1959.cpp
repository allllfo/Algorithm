#include <iostream>
using namespace std;

int main(void){

    int T; cin>>T;
    for(int i=1; i<=T; i++){

        int N, M; cin>>N>>M;
        int A[N]; int B[M];
        int max, start =0;

        for(int k=0; k<N; k++){
            cin>>A[k];
        }

        for(int j=0; j<M; j++){
            cin>>B[j];
        }

        if(N<M){
            while((N+start<=M)){
                int result=0;
                for(int m=0; m<N; m++){
                     result += A[m]*B[m+start];
                }
                if(max <result){max = result;}
                start ++;
                cout<<N+start;
            }
        }
        else{

            while((M+start<=N)){
                int result=0;
                for(int m=0; m<M; m++){
                     result += B[m]*A[m+start];
                }
                if(max <result){max = result;}
                start ++;
            }
        }

        cout<<max<<"\n";
    }   
}
