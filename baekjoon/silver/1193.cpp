#include <iostream>
using namespace std;

int main(void){

    int X; cin>>X;
    int sum =1; int count =0;
    int a, b;
    
    
    while(sum <= X){
        
        count ++;
        if(sum+count>X){
            break;
        }
        sum += count;
        
    }

    if(count %2 == 0){
        a=1; b= count;
    }
    else {
        a= count; b=1;
    }


    for(int i =0; i<count; i++){ //0/7 1/8 2/9 3/10

        if(X == (sum+i)){
            break;
        }
        if(count %2 ==0){
            a++;
            b--;
        }
        else{
            a--;
            b++;
        }

    }
    cout<<a<<"/"<<b;  
    
}