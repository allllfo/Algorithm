/*브루트포스-1018.체스판 다시칠하기*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
char arr[51][51];
int check(int x, int y);

int main(void){

    cin>>N>>M;
    char input;
    int result=100;

    //입력값 넣음
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>input;
            arr[i][j]=input;
        }
    }

    for(int i=0; i+8<=N; i++){ // 8*8크기만큼 자를 체스판 시작 점을 고름. 이때, <=인 이유는 i+8=N 인 i 값이 넘어갔을때 "i+0, i+1 .. i+7까지 셀 수 있게됨.
        for(int j=0; j+8<=M; j++){
            int minimum = check(i,j);
            if(minimum <= result){
                result = minimum;
            }
        }
    }
    cout<<result;

}

//첫번째 시작이 B인 경우, W 인 경우를 나눠서 count함. 이때, 체스판은 (행+열)%2 ==0 인 것들끼리 같은 색인 것을 이용함.
int check(int x, int y){
    int countW =0, countB=0;
    for(int i=x; i<x+8; i++){ // 이렇기 때문에 위에서 "<=" 이 쓰인거임
        for(int j=y; j<y+8; j++){
            
            if((i+j)%2==0){ // 얘들끼리는 색이 같음
                if(arr[i][j]!='W'){ // 첫번째 시작이 W인 것으로 가정했을때, 다른 경우 count++
                    countW++;
                }
                if(arr[i][j]!='B'){ // 첫번째 시작이 B인 것으로 가정했을때, 다른 경우 count ++
                    countB++;
                }
            }
            else{ // 위와 반대 상황
                if(arr[i][j]!='B'){
                    countW++;
                }
                if(arr[i][j]!='W'){
                    countB++;
                }
            }
        }

    }
    return min(countW, countB);
}

/* 문제 잘못 읽어서 8*8로 잘라서 하는게 아니고 그냥 모든 면적에서 바꾸는 건줄 알았음.
temp와 다르면 넘어가고 같으면 바꿔주기
//첫번째 문자를 기준으로 뒤에 것들을 변경함
int check(char arr_check[][51]){
    int count =0; 
    char temp = arr_check[0][0];

    for(int i=0; i<N; i++){ //0 1 2
        for(int j=0; j<M; j++){

            if(i==0 && j==0) continue;

            if( temp != arr_check[i][j] ){ //기준 값과 현재 체크하는 값이 서로 다른 경우, temp만 현재값으로 업데이트해줌
                temp = arr_check[i][j];
            }
            else { //양옆 값이 똑같은 경우
                if(temp =='W'){
                    arr_check[i][j]='B';
                    temp ='B';
                    count++;
                }
                else {
                    arr_check[i][j]='W';
                    temp ='W';
                    count++;
                }
            }

            if(j==M-1){ // 한줄의 맨 끝에 있는 애에 도착했다면, temp(기준)을 현재줄의 첫번째 아이로 바꿔줌
                temp = arr_check[i][0];
            }
        }
    }

    return count;
}

*/

