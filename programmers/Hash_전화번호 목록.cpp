#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    
    for(int i=0; i<phone_book.size()-1; i++){
        int length = phone_book[i].length();
            if(phone_book[i] == phone_book[i+1].substr(0, length)){
                answer = false;
                break;
            }
    }
    
    return answer;
}
