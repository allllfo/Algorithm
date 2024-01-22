#include <iostream>
using namespace std;
int N, M, result=0;
int computer[101][101]={0,};
bool visited[101]={false,};

void dfs(int start);

int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N>>M;
    for(int i=0; i<M; i++){
        int a , b;
        cin>>a>>b;
        computer[a][b] = 1;
        computer[b][a] = 1;
    }

    dfs(1);
    cout<<result;
}

void dfs(int start){

    visited[start] = true;
    if(start != 1){
        result++;
    }

    for(int i=0; i<101; i++){
        if(computer[start][i]==1 && visited[i]==false){
            dfs(i);
        }
    }
}