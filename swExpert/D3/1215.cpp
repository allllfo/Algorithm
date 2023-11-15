#include <iostream>
#include <string>
using namespace std;

int main(void){

    for(int i=0; i<10; i++){

        int N; cin>>N;
        char arr1[8][8]={};
        char arr2[8][8]={};
        bool check1 = true, check2= true;
        int count =0;

        for(int i=0; i<8; i++){
            string tmp; cin>>tmp;
            for(int j=0; j<8; j++){
                arr1[i][j]=tmp[j];
                arr2[j][i] = arr1[i][j];
            }
        }

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                for(int k=0; k<N/2; k++){

                    if((j+N-1-k)>7 ||arr1[i][j+k]!=arr1[i][j+N-1-k]){
                        check1 = false;
                        break;
                    }
                }
                

                for(int k=0; k<N/2; k++){
                     if((j+N-1-k)>7 || arr1[j+k][i]!=arr1[j+N-1-k][i]){
                        check2 =false;
                        break;
                    }
                /*for(int k=0; k<N/2; k++){
                     if((j+N-1-k)>7 || arr2[i][j+k]!=arr2[i][j+N-1-k]){
                        check2 =false;
                        break;
                    }
                }*/
                if(check1 == true){
                count ++;
                }
                if(check2 == true){
                    count ++;
                }
                check1 = true;
                check2 = true;
            }
        }


    }
           cout<<"#"<<i+1<<" "<<count<<"\n";
}
}