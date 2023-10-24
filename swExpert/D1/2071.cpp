#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int T; cin>>T;
    
    for(int j=0; j<T; j++){
   
    double sum =0;
    for(int i=0; i<10; i++){
        
        int num; cin>>num;
        sum += num;
    }

    cout<<"#"<<j+1<<" "<<round(sum/10)<<"\n";
 }
}