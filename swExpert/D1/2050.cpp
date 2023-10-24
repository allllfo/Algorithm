#include <iostream>
using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    string str; cin>>str;

    for(int i=0; i<str.length(); i++){
        cout << char(str[i]+32) <<" ";
        // str[i] += 32;
    }

    //cout<<str;
}