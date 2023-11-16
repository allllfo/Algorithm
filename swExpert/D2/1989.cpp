#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int T; cin>>T;
    for(int i=1; i<=T; i++){
        
        string word; cin>>word;
        cout<<"#"<<i<<" ";
        int start = 0; int end = word.length()-1;
        int num = 0; 

        while(start<end){
            start += num;
            end -= num;
            if(word[start] != word[end] ){
                cout<<"0";
                break;
            }
            num ++;
        }

        if(start>=end) { cout<<"1"; }
    }
}