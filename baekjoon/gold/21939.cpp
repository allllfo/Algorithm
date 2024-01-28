#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main(void){
    set<pair<int,int> > lvs;
    map<int, int> problems;

    int N; cin>>N;
    for(int i=0; i<N; i++){
        int pr, lv; cin>>pr>>lv;

        lvs.insert(make_pair(lv,pr));
    }

    int M; cin>>M;

    for(int i=0; i<M; i++){
        string order; cin>>order;

        if(order=="add"){
            int pr, lv; cin>>pr>>lv;
            lvs.insert(make_pair(lv,pr)); //lv과 pr이 같은 번호로 들어올 수 없으므로 중복 검사 안함
        }
        else if(order=="recommend"){
            int tmp; cin>>tmp;
            if(tmp==1){
                cout<<(*(--lvs.end())).second<<"\n";

            }
            else if(tmp==-1){
                cout<<(*lvs.begin()).second<<"\n";
            }
        }
        else if(order=="solved"){
            int tmp; cin>>tmp;
            lvs.erase(make_pair(problems[tmp], tmp));
            
        }
    }
    
}



/*    int pr, lv; cin>>pr>>lv;
        if(maxMap.count(pr)==0)
        { 
            maxMap.insert(make_pair(pr,lv));
            minMap.insert(make_pair(pr,lv)); 
        }
        else{
            maxMap[pr]=lv;
            minMap[pr]=lv;
        }
map에다가, key값에는 문제번호, value값에 true, false 들어가있음
solved하면, map에 있는 value값을 false로 바꿔줌
recommend하면, 우선순위 큐에서 빼기 전에 해당 숫자의 value값이 true 인지 false인지 볼것. false라면, pop한 후에 다시 반복
add하면, map에 key값이랑 value를 true로 줌

solved 한 다음에 다시 같은 값을 add하는 경우
에서 문제가 되는 경우는?
가장 쉬운문제이거나, 가장 어려운 문제가 될 경우이다.

min에서 lv이 원래 값보다 더 작은 경우는 괜찮은데,
원래 값보다 더 큰 경우
*/

/*

struct compare_min{ //작은 게 나옴
    bool operator()(pair<int,int>&a, pair<int,int>&b){
        if(a.first == b.first){//lv이 같다면
            return a.second > b.second;
        }
        else{
            return a.first > b.first;
        }
    }
};

struct compare_max{ //큰 게 나옴
    bool operator()(pair<int,int>&a, pair<int,int>&b){
        if(a.first == b.first){//lv이 같다면
            return a.second < b.second;
        }
        else{
            return a.first < b.first;
        }
    }
};

int main(void){
    priority_queue<pair<int, int>, vector<pair<int,int> >, compare_max> problems_max; //첫번쨰 인자 기준으로 내림차순 정렬 따라서, 첫번쨰가 난이도, 두번쨰가 문제번호
    priority_queue<pair<int, int>, vector<pair<int,int> >, compare_min> problems_min;
    map<int, int> m;
    // 맵을 둘다 쓰면??
    // 맵 하나는 작은순서대로, 하나는 큰순서대로 놓고 

    int N; cin>>N;
    for(int i=0; i<N; i++){
        int pr, lv; cin>>pr>>lv;

        problems_max.push(make_pair(lv,pr));problems_max.push(make_pair(lv,pr)); 
        problems_min.push(make_pair(lv,pr)); 
        m.insert(make_pair(pr, 1)); // 얘는 문제 번호 먼저, 살아있다는 1 먼저 기본으로 넣어줌
    }

    int M; cin>>M;

    for(int i=0; i<M; i++){
        string order; cin>>order;

        if(order=="add"){
            int pr, lv; cin>>pr>>lv;
            problems_max.push(make_pair(lv,pr));
            problems_min.push(make_pair(lv,pr));
            m[pr]=1;
        }
        else if(order=="recommend"){
            int tmp; cin>>tmp;
            if(tmp==1){
                while(1){
                int num = problems_max.top().second;
                if(m[num]==1){
                    cout<<num;
                    break;
                }
                else{
                    problems_max.pop();
                    m[num]=0;
                }
                }
            }
            else if(tmp==-1){
                while(1){
                int num = problems_min.top().second;
                if(m[num]==1){
                    cout<<num;
                    break;
                }
                else{
                    problems_min.pop();
                    m[num]=0;
                }
                }
            }
        }
        else if(order=="solved"){
            int tmp; cin>>tmp;
            m[tmp]=0;
            
        }
    }

}
*/