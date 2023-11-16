
/*
문제가 이상해보임
근데 이런 패턴 찾는 문제 해법 다시한번 봐야할듯.
**/
#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin>>T;
    for(int i=1; i<=T; i++){

        string str; cin>>str;
        char firstC = str[0];
        int count =1;

        /*for(int j=0; j<str.length(); j++){
            if(str[j]!= firstC)
        }*/

        for(int end = str.length()-1; end>=0; end--){

            if(str[end]== firstC){

                string pattern1 = str.substr(0,count);
                string pattern2 = str.substr(str.length()-count, count);
                
                if(pattern1 == pattern2) {
                    cout<<count<<"\n";
                    break;
                }
            }
            count ++;
        }

       
    }

}
