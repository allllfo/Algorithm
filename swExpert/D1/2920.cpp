#include <iostream>
using namespace std;

int main(void){

    int N; cin>>N;

    for(int i =1; i<=N; i++){
        
        int a, b; cin>>a>>b;
        cout<<"#"<<i<<" "<< a/b <<" "<<a%b;
    }

}