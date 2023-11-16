#include <iostream>
using namespace std;

int main(void){
    
}

/*int main(void){

    int p , q;
    cin>>p>>q;
    int count = 0, tmp = 1;
    int px=0, py=0, qx=0, qy=0, nx, ny;
    int arr[10001]={0,};

    for(int i=1; i<10001; i++){
        
        arr[i]=tmp+count;
        tmp = arr[i];
        count++;
    }

    for(int i=1; i<10001; i++){

        if(arr[i]<=p && arr[i]>p){
            int tmp = p-arr[i];
            px = 1 + tmp;
            py = i - tmp;
        }

        if(arr[i]<=q && arr[i]>q){
            int tmp = q-arr[i];
            qx = 1 + tmp;
            qy = i - tmp;
        }

        if(px!=0 && py!=0 && qx!=0 && qy!=0){
            nx = px + qx;
            ny = py + qy;
            break;
        }
    }

    int result = arr[ny];
    int tmpy = ny+1;
    for(int i=1; i<nx; i++){
        result += tmpy;
        tmpy++;
    }

    cout<<result;

}*/
