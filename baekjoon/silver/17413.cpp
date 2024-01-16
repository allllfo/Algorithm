/*
17413. 단어 뒤집기2
공백이 들어오면 거꾸로 뒤집기
'<'가 들어오면 '>'가 들어올떄까지 그대로 출력하기
하나의 출력이 끝나면 string값 초기화하기

공백 포함 문자열 받는법
문자열 거꾸로 출력하는법
문자열 빈 걸로 저장하기

< 있는데 공백 포함된경우
그냥 공백있는 경우
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

int main(void){
    string S; 
    getline(cin, S); //cin>>S;
    string temp=""; 

    for(int i=0; i<S.length(); i++){
        

        if(S[i]=='<' && temp!=""){
            reverse(temp.begin(), temp.end());
            cout<<temp;
            temp="";
        }

        if(S[i]=='>'){
            cout<<temp<<">";
            temp="";
            continue;
        }

        if(S[i]==' '){

            if(temp[0]=='<'){
                temp+=S[i];
                continue;
            }

            reverse(temp.begin(), temp.end());
            cout<<temp<<" ";
            temp="";
            continue;
        }

        if(i==S.length()-1){
            temp += S[i];
            reverse(temp.begin(), temp.end());
            cout<<temp;
        }

        temp += S[i];
    }

}