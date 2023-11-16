#include <iostream>
using namespace std;
void nqueen(int row);
int cnt=0, N; // 정답으로 제출할 count, 체스판 크기 N
int board[10]; // 문제에서 N이 최대 10이므로 board[10]으로, 각 행에 따른 열 번호를 저장함. 즉, board[2]=1 이라면, 2번쨰 행에 1열에 있는 체스임

int main(void){

    cin>>N;
    cnt = 0; // 위에서 0으로 선언해도 되지만, 테스트케이스가 여러개이므로 여기서 초기화를 해줘야함

    for(int i=0; i<N; i++){
        board[0]=i; // 첫번째 줄에 체스를 놓는 경우의 수 (총 0~N까지 N개의 경우의 수가 있음)
        nqueen(1); // nqueen함수 호출
    }

    cout<<cnt; // 정답 출력
}

void nqueen(int row){ // 내가 이번에 체스를 둘 행 = row

    if(row == N){ // 마지막 행까지 다 뒀다면, 
        cnt+=1; // count + 1 
        return; // 이 함수를 끝냄
    }

    for(int i=0; i<N; i++){ // row 행에 어디 열에다 둘건지 -> 0번쨰 열부터 N번째 열까지 반복

        bool check = true; 
        board[row]=i; // row 행에 i열에 체스를 둠

        for(int j=0; j<row; j++){ // 그 전까지 완성된 행의 퀸들과 부딪히는 점이 있는지 검사 
            
            if(board[row]==board[j] || (row-j)==(board[row]-board[j]) || (row-j)==(board[j]-board[row])) // 같은 열에 둔 퀸이 있거나 대각선이거나
            {
                check = false; // 부딪히므로 적합하지 않은 경우임
                break; // 하나라도 부합하지 않으면 안되므로, 검사하는 반복문을 나감
            }
        }

        if(check == true){ // 모든 조건 통과했다면
            nqueen(row +1); // 그 다음 행에 체스를 둔다.
        }


    }

}

