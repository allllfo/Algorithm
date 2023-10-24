/*
완료

#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int T; cin>>T;
    int arr[10]; int result =0;
    for(int i=0; i<T; i++){
        for(int j=0; j<10; j++){
            cin>>arr[j];
            if(arr[j]%2 !=0 ){
                result +=arr[j];
            }
        }
        cout<<"#"<<i+1<<" "<<result<<"\n";
        result =0;
    }
}
*/