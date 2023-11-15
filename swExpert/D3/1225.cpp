#include <iostream>
#include <queue>
using namespace std;

int main(void){
    
    queue<int> pw;
    int count = 1;

    for(int i=0; i<8; i++){
        int num; cin>>num;
        pw.push(num);
    }

    while(1){
        int tmp = pw.front();
        //cout<<tmp<<" ";
        pw.pop();

        if(count>5){
            count = 1;
        }

        tmp -= count;
        count++;

        if(tmp <=0) {
            tmp = 0;
            pw.push(tmp);
            break;
            }

        pw.push(tmp);
    }

    for(int i=0; i<8; i++){
        cout<<pw.front()<<" ";
        pw.pop();
    }

}