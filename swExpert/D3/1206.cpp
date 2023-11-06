#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){

    for(int i=1; i<=10; i++){
        cout<<"#"<<i<<" ";

        int N; cin>>N;
        vector<int> height;
        vector<int> count(N, 0);
        int result=0;

        for(int i=0; i<N; i++){

            int h; cin>>h;
            height.push_back(h);
        }

        for(int i=0; i<N; i++){

            if(i!=0 && i!=1 && i!=N-1 && i!=N-2){

               int maxNum = max(max(height[i - 2], height[i - 1]), max(height[i + 1], height[i + 2]));

               if(maxNum>=height[i]){ 
                count[i]=0;
                }
               else{
                count[i]=height[i]-maxNum;
               }
                   
            
            }
        }

         for(int i=0; i<count.size(); i++){
                result +=count[i];
            }
        cout<<result<<"\n";
        }

}


/*
i 가 나라고 할때, i+3부터는 i의 높이 이상가능
i-2 부터 i+2 까지는 i 높이 미만이어야 한다.

arr[n] 시작점 0 이라 할때 (2 ~ n-3)까지 적용
*/