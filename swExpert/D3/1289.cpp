#include <iostream>
using namespace std;

int main(void){

    int T; cin>>T;
    for(int i=1; i<=T; i++){

        string N; cin>>N;
        int count =0;
        if(N[0]!='0'){
                count=1;
            }

        for(int i=0; i<N.size()-1; i++){
            if(N[i]!=N[i+1]){
                count++;
            }
        }

        cout<<count;
        
    }
    
}

/*
0000
1010

1111
10010
10010110
*/