#include <iostream>
using namespace std;
int list[10000] = {false,};

void self_number(int num) {

       int sum = num;
       while(num !=0 ){
        int tmp = num%10;
        num /= 10;
        sum += tmp;
       }
       if(sum>10000){
        return ;
       }
       list[sum] = true;

}
int main(void){

    for(int i=1; i<10000; i++){
        self_number(i);
    }

    for(int i=1; i<=10000; i++){
        if(list[i]==false){
            cout<<i<<"\n";
        }
    }

}