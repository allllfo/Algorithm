#include <iostream>
using namespace std;

int main(void){
    int T; cin>>T;
    for(int i=0; i<T; i++){
        int max =0;
        
        for(int j=0; j<10; j++){
            int num; cin>>num;
            if (max<num) {max = num;}
        }
        cout<<"#"<<i+1<<" "<<max<<"\n";

    }
}