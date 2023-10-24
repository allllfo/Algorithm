#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N; cin>>N;
    int result[1000] ={};
    int i=1, count = 0;

    while(i <= N/2){
        
        if(N % i ==0 )
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<N;
    /*result[count] = N;

    sort(result, result +(count+1));

    for(int i=0; i<=count; i++){
        cout<<result[i]<<" ";
    }*/
}