#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void){
    int N; cin>>N;
    string word;
    int result=0;
    char oldchar;

    for(int i=0; i<N; i++){
        cin>>word;
        stack<char> wordStack;

        if(word.length()%2!=0){
            continue;
        }
        for(int i=0; i<word.length(); i++){
            if(wordStack.empty()){
                oldchar=word[i];
                wordStack.push(word[i]);
                continue;
            } 
            if(word[i]!=oldchar){
                wordStack.push(word[i]);
                oldchar=word[i];  
            }
            else if(word[i]==oldchar){
                wordStack.pop();
                if(!wordStack.empty()){
                oldchar=wordStack.top();
                }
            }
            
        }
        if(wordStack.empty()){
            result++;
        }
        
    }
    cout<<result;
}

/*
1. 단어의 길이가 홀수면 안됨
2. A와 B사이에 홀수개가 끼면 안됨
3. 연달아서 있는 단어가 홀수개이면 안됨
4. 양끝은 한개여도 됨
AABBA
ABBABAAB
AAABA
ABBA
ABBAAB

바구니 세개 만들어 전체단어 / A / B
다른 바구니로 넘어갈때 현재 바구니가 0이 되지 않았는데 넘어가면 error
AAABB

*/