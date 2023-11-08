#include <iostream>
using namespace std;

int main(void){

    int T; cin>>T;
    for(int i=1; i<=T; i++){

        int N; cin>>N;
        int arr[N][N];
        int result =0, count=1, start=N/2;

        //testcase 입력받음
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                scanf("%1d", &arr[i][j]);
            }
        }

        for(int i=0; i<N; i++){
            if(count<=N){
                int temp = start;
            for(int j=1; j<=count; j++){ 
                
                result += arr[i][temp];
                temp++;
            }
            }
            if(i<N/2){
                count+=2;
                start--;
            }
            else{
                count-=2;
                start++;
            }

        }

        cout<<"#"<<i<<" "<<result<<"\n";



    }

}
// i=0, c= 1 / c=3, i=1 / c=5, i=2/ c=3 i=3 / c=1 i=4 
/*
3*3 : (0,1) / (1,0), (1,1), (1,2) / (2,1)

5*5 : (0,2) / (1,1) (1,2), 1,3) / (2,0)~~(2,4) / (3,1)
-> 열 : 2 1 0 1 2 // 행: 0 , 1, 2, 3, 4
        0 -1 -2 -1 0
첫번째 칠하는 칸 = (0, N/2) / 1개
두번째 (1,N/2-1) , (1, N/2) , (1, N/2+1) /3개
세번째  /5개 +-2
네번째 7개 +-3

만약에 (0,0) 까지 왔으면, 다시 백 

*/