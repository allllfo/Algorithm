#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int T; cin>>T;
    for(int i=1; i<=T; i++){


        int N; cin>>N;
        int result = 1;
        int numList[10] = {false,};
        bool check = true;
        cout<<"#"<<i<<" ";

        while(check){
            int tmp = N * result;
        while(tmp!=0){
            int num = tmp%10;
            if(numList[num]==false) {numList[num]=true;}
            tmp/=10;
        }

        for(int j=0; j<10; j++){
            if(numList[j]==false){
                result ++;
                break;
            }
            if(j==9) {
                cout<<result*N<<"\n";;
                check = false;
            }
        }
    

        }


}
}
