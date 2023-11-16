//회사에 있는 사람
#include <iostream>
using namespace std;
char board[50][50];
int main(void){

    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, M;
    cin>>N>>M;
    
    int Wcount=0, Bcount=0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char color;
            cin>>color;
            board[i][j]=color;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
           //start를 W로
           if(board[0][0]=='B') {
            Wcount++; board[0][0]=='W';
            

           }

           //start를 B로
           if(board[0][0]=='W') {
            Bcount++; board[0][0]=='B';
           }



        }
    }



    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<board[i][j];
        }
        cout<<"\n";
    }

}

int check(int N, int M){
    int count =0;
    for(int i=0; i<N;i++)
    {
        for(int j=0; j<M; j++){

            if(board[i][j]=='W'){
                if(j != (M-1) && board[i][j+1]!='B'){
                    board[i][j+1] = 'B';
                    count++;
                }

                if(i!= (N-1) && board[i+1][j]!='B'){
                    board[i+1][j]='B';
                    count ++;
                }
            }

            if(j != (M-1) && board[i][j]=='B'){
                if(board[i][j+1]!='W'){
                    board[i][j+1] = 'W';
                    count++;
                }

                if(i!= (N-1) &&board[i+1][j]!='W'){
                    board[i+1][j]='W';
                    count ++;
                }
            }
        }
    }
    return count;
     
}

#include <iostream>
#include <vector>
using namespace std;

int main(void){

    vector<int> vector[3];
}