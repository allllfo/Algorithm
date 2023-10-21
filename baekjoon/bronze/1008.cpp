/*
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    double A , B;
    cin>>A>>B;
    cout.precision(10);
    cout<<A/B;

}
*/
/*
오차범위에 제한을 둔게 10의 -9승까지라 해서 10으로 소수점 제한을 둔것이 아님.
소수점 제한을 20로 두더라도 성공한다. -> 오차 범위를 줄이기 위해서 소수점 제한을 걸기만 하면 됨
*/