#include <iostream>
#include <queue>
using namespace std;
int N,M,result=0;
int arr[101][101]={0,};
bool visited[101]={false,};
queue<int> q;

void bfs();

int main(void){

    cin>>N>>M;
    for(int i=0; i<M; i++){

        int a,b; cin>>a>>b;
        arr[a][b] = 1;
        arr[b][a] =1;
    }

    q.push(1);
    bfs();
    cout<<result;

}

void bfs(){

    while(!q.empty()){

        int tmp = q.front();
        visited[tmp]= true;
        q.pop();
        if(tmp !=1)
        {result++;}

        for(int i=1; i<=N; i++){
            if(arr[tmp][i]==1 && visited[i] == false){
                q.push(i);
                visited[i]=true;
            }
        }

    }

    
}