#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int pw, testNum; cin>>pw>>testNum;
    int result =1;
    
    while(pw != testNum){
        result ++;
        testNum ++;
    }

    cout<<result;

}

// 어차피 1씩 증가하니까, pw - testNum + 1 하면됨;
