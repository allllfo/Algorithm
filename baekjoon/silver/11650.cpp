//좌표 정렬하기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int,int> a, pair<int, int> b);

int main(void){

    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	pair<int,int> arr[100001] ={make_pair(0,0),};

	for(int i=0; i<N; i++){
		int x, y;
		cin>>x>>y;
		arr[i].first = x;
		arr[i].second = y;
	}

	sort(arr, arr+N );

	for(int i=0; i<N; i++){
		cout<<arr[i].first<<" "<<arr[i].second<<"\n";
	}

}

