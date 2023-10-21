/*#include <iostream>
using namespace std;

//int main(void)
{
    int N; cin>>N;
    int arr[N];
    int min, max;
    for(int i =0; i<N; i++){
        int num ; cin >> num;
        arr[i]=num;
        
        if(i==0)
        { min = arr[0]; max=arr[0]; }
        else
        {
            if(min>=arr[i]) { min = arr[i]; }
            if(max<=arr[i]) { max = arr[i]; }
        }
    }

    cout << min << " " << max ;
    
}
*/
/*
min 과 max 를 고정값으로 미리 정해두고
새로운 수가 들어올때마다 걔네랑 비교하기
*/