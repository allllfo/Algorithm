#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin>>T;
    for(int i=0; i<T; i++){

        int N; cin>>N;
        int result =0;
        cout<<"#"<<i+1<<" ";

        for(int j=1; j<=N; j++){
            
            if(j%2==0) {
                result-=j;
            }
            else {
                result +=j;
            }
        }
        cout<<result<<"\n";
    }
}