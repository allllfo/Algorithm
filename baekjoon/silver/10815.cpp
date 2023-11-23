#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    
    int N, M; 
    cin>>N;
    int pivot = N/2;
    int arr1[N], arr2[M];

    for(int i=0; i<N; i++){

        int num; cin>>num;
        arr1[i] = num;
    }
    sort(arr1, arr1+N);

    cin>>M;

    for(int i=0; i<M; i++){
        int num; cin>>num;
        while(1){
            if(arr1[pivot] == num || arr1[0]== num || arr1[N-1]==num ){
                cout<<"1 ";
                return;
            }
            if(((N-1-pivot)/2)==0 || (pivot/2)==0){
                cout<<"0";
                return;
            }

            if(num>=arr1[pivot]){
                pivot += (N -1 - pivot)/2; 
            }
            else{
                pivot -= pivot/2;
            }

        }
    }

}