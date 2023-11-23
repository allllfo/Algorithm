#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void){

    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int> > q2;
    
    int N; cin>>N;

    for(int i=0; i<N; i++){
        int num; cin>>num;
        q1.push(num);
        q2.push(num);
    }  

    for(int i=0; i<N; i++){

        int first = q1.top();
        q1.pop();
        cout<<first<<" ";
    }
    cout<<"\n";

    for(int i=0; i<N; i++){

        int second = q2.top();
        q2.pop();
        cout<<second<<" ";
    }
    cout<<"\n";

}
