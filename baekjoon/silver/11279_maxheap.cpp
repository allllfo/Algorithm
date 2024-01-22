#include <iostream>
#include <queue>
using namespace std;

int main(void){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> max_heap;

    int N; cin>>N;
    
    for(int i=0; i<N; i++){
        int tmp; cin>>tmp;

        if(tmp==0){
            if(!max_heap.empty()){
                cout<<max_heap.top()<<"\n";
                max_heap.pop();
            }
        else{
            cout<<0<<"\n";
            }
        }
        else{
            max_heap.push(tmp);
        }
    }
}

   //priority_queue<int, vector<int>, greater<int> > max_heap;