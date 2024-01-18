#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(void){
    int N; cin>>N;
    stack<int> s;

    for(int i=0; i<N; i++){
        string order; cin>>order;

        if(order=="top"){
            if(s.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<s.top()<<"\n";
            }
        }
        else if(order=="size"){
            cout<<s.size()<<"\n";
        }
        else if(order=="empty"){
            if(s.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(order=="pop"){
            if(s.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<s.top()<<"\n";
                s.pop();
            }
        }
        else if(order=="push"){
            int num; cin>>num;
            s.push(num);
        }
    }
}