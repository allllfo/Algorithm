#include <iostream>
#include <queue>
using namespace std;
void bfs(int start);
void dfs(int start);
int map[1001][1001]={0,};
bool visited_bfs[1001]={false,};
bool visited_dfs[1001]={false,};
int N,M,V;

int main(void){

    cin>>N>>M>>V;

    for(int i=0; i<M; i++){

        int a, b; cin>>a>>b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    dfs(V);
    cout<<"\n";
    bfs(V);

}

void bfs(int start){

    queue<int> q;

    q.push(start);
    while(q.size() > 0){

        int tmp = q.front();
        cout<<tmp<<" ";
        q.pop();
        visited_bfs[tmp] = true;

        for(int i=1; i<=N; i++){// 정점의 개수 N만큼 돌면서 반복
            
            if(map[tmp][i]== 1 && visited_bfs[i] == false){ 

                q.push(i);
                visited_bfs[i] = true; // i 점은 미리 방문 기록 -> 안하면 중복으로 방문할 수 있음 어차피 이거 뒤에 pop하면 방문했다고 추가할거니까 미리 해도댐. 이미 큐에 넣었다는건 언젠가 pop되는거니까.
                // 이거 안하면 오히려 큐에 여러번 추가될 수 있음.
            }
            
        }

    }

}

void dfs(int start){

    cout<<start<<" ";
    visited_dfs[start] = true;

    for(int i=1; i<=N; i++){ // 정점의 개수 N만큼 돌면서 반복
        if(map[start][i] == 1 && visited_dfs[i] == false){

            dfs(i); // 재귀함수는 해당함수가 실행되는 동안은 다른게 실행되지 않으므로 큐에 넣을때 방문처리 해준것처럼 따로 해줄필요 없음.
        }
    }
    return;
}