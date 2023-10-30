#include <iostream>
using namespace std;

int main(void){
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
        int N, M;
        cin>>N>>M;

        long long int up = 1 , down = 1;

        for(int j=0; j<N; j++){

            up *= (M-j);
            down *= (j+1);
        }
        cout<<up<<"\n";
        cout<<down<<"\n";
        cout<<up/down<<"\n";
        
    }

}