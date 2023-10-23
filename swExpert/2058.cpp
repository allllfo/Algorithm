#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N; cin>>N;
    int sum =0; 
    if(N/1000 > 1) { sum += N/1000; N -= 1000 * (N/1000); }
    if(N/100 > 1) { sum += N/100; N -= 100 * (N/100); }
    if(N/10 > 1) { sum += N/10; N -= 10 * (N/10);}
    sum += N;

    cout<<sum;
}