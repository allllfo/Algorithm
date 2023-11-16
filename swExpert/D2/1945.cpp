#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int T; cin>>T;
    int num[5]={2,3,5,7,11};

    for(int i=0; i<T; i++){

        int N; cin>>N;
        cout<<"#"<<i+1<<" ";
        int count =0;

        for(int j=0; j<5; j++){
            
            int result =0; 

            while(N % num[j] ==0){
            
                N /= num[j] ;
                result ++;
            }
            cout<<result<<" ";
        }

    }
}