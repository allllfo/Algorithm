#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//bool compare(pair<int, int> a, pair<int, int> b);
int main(void){

    int N; cin>>N;
    pair<int,int> arr[N];
    int count[N];
    
    
    for(int i =0; i<N; i++){
        int x; cin>>x;
        arr[i].first = x;
        arr[i].second = i;
    }

    sort(arr, arr+N); // -10 -9 2 4 4

    int cnt = 0;
    for(int i=0; i<N; i++){

        int tmp = arr[i].second;
        count[tmp] = cnt;

        if(i!=N-1 && arr[i].first!=arr[i+1].first){
            cnt++;
        }

    }

    for(int i=0; i<N; i++){
        cout<<count[i]<<" ";
    }

}

/*
999 999 999 1000 1000 1000
1 3 5 0 2
1000 999 1000 999 1000 999

*/
