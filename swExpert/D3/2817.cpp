#include <iostream>
using namespace std;
void calculate(int index, int tmp);
int N, K, cnt;
int arr[20];

int main(void){
    
    cin>>N;
    cin>>K;

    for(int i=0; i<N; i++){
        int num; cin >>num;
        arr[i] = num;
    }

    for(int i=0; i<N; i++){
        calculate(i, 0);
    }

    cout<<cnt<<"\n";

}

void calculate(int index, int tmp){

    int sum = tmp;

    sum += arr[index];

    if(sum == K){
        cnt++;
        return;
    }
    
    if(sum > K){
        return;
    }

    for(int i=(index+1); i<N; i++){
        calculate(i, sum);
    }

}