#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int N; cin>>N;
    int mid = N/2; 
    int arr[N];

    for (int i=0; i<N; i++){
        int num; cin>>num;
        arr[i] = num;
    }

    sort(arr, arr+N);

    for (int i=0; i<N; i++){
        cout<<i<<" : "<<arr[i]<<"\n";
    }
    cout<<arr[mid];
}