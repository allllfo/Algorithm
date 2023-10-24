#include <iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t=0;
    for(int i = 0; i<5; i++){
        
       for(int j=0; j<5; j++){
        if(i==j) {cout<<"#";}
        else {cout<<"*";}
       }
       cout<<"\n";
    }
}