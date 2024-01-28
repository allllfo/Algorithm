#include <iostream>
#include <stack>
using namespace std;
int main(void){
    string str; cin>>str;
    stack<char> s;
    int result=0, tmp=1;

    for(int i=0; i<str.length(); i++){

        if(str.length()%2!=0){
            result=0;
            break;
        }
        
        if(str[i]=='('){
            tmp *=2;
            s.push('(');
        }
        else if(str[i]=='['){
            tmp*=3;
            s.push('[');
        }
        else if(str[i] ==')' && (s.empty() || s.top()!='(')){
            result=0;
        }
        else if(str[i]==']' && (s.empty()|| s.top()!='[')){
            result=0;
        }
        else if(str[i]==')'){
            if(str[i-1]=='('){
                result+=tmp;
            }
            tmp/=2;
            s.pop();
        }
        else if(str[i]==']'){
            if(str[i-1]=='[]'){
                result+=tmp;
            }
            tmp/=3;
            s.pop();
        }
    }

    if(!s.empty()){
        result=0;
    }

    cout<<result;
}