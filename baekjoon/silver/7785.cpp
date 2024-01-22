//회사에 있는 사람
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(void){

	int n; cin>>n;
	set<string> crew;
	set<int>::iterator it;

	for(int i=0; i<n; i++){
		string name; cin>>name;
		string record; cin>>record;

		if(record == "enter"){
			crew.insert(name);
		}
		else{
			crew.erase(name);
		}
	}

	for(auto it = crew.rbegin(); it!=crew.rend(); it++){
		cout<< *it<<"\n";
	}

}