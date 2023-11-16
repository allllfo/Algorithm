#include <iostream>
using namespace std;

int main (void){

    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int T; cin>>T;
    for(int i=1; i<=T; i++){

        int P,Q,R,S,W;
        cin>>P>>Q>>R>>S>>W;
        cout<<"#"<<i<<" ";

        int Acharge , Bcharge;

        Acharge = P * W;

        if(W<=R) { Bcharge = Q;}
        else {
            Bcharge = Q + ((W-R)*S);
        }

        Acharge < Bcharge ? cout<<Acharge<<"\n" : cout<<Bcharge<<"\n";

    }
}