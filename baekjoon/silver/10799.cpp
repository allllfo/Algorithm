#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(void){
    
    stack<char> line;
    string stick; cin>>stick;
    int count=0;

    for(int i=0; i<stick.size(); i++){
        if(stick[i]=='('){
            line.push('(');
        }
        else if(stick[i]==')'){
            if(stick[i-1]=='('){
                line.pop();
                count+=line.size();
            }
            else{
                line.pop();
                count++;
            }
        }
    }

    cout<<count;
}


/*
()(((()())(())()))(())
.(((..)(.) . ) ) ( . )
0123456789101112131415

. : 0 4 5 8 10 14
(((2)(1)1))(1)
((2 1 1))
*/

/*
레이저 포인트들 제외하고 쌍 맞는 애들끼리 쇠막대기가 됨
벡터에 앞에서부터 push_back 하다가
( 인데 )게 들어오면 pop_back 한 후에 . 넣기

아님 걍 앞에서부터 가면서 마지막 ( 이거 있는 인덱스 번호 저장하고 ) 들어오면 마지막 인덱스 번호랑 ) 저장
((( . . ) ( . ) . ) )
(..)(..)
끝에서부터?? 양 끝 ( ) 안에 . 몇개인지 세기 4개니까 result + 5
(( . . ) ( . ) . ) 

여기서도 끝에서부터 양 끝 ( )안에 . 4개니까 result + 5
양 끝 지워 이때 마지막 끝이나 맨 처음이 . 얘도 같이 지우기
( . . ) ( . )

*/