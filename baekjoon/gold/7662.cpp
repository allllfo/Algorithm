#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(void) {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        set<pair<int, int>> qset;

        int k;
        cin >> k;

        for (int j = 0; j < k; j++) {
            char order;
            cin >> order;

            if (order == 'I') {
                int num;
                cin >> num;
                qset.insert({num, j}); //어차피 우리는 key값이 중복되지 않게 하기 위한 second값이므로, j값을 넣어줌
            } else if (order == 'D') {
                int num;
                cin >> num;

                if (!qset.empty()) {
                    if (num == 1) {
                        auto it = prev(qset.end());//prev : 전 값
                            qset.erase(it);
                  
                    } else if (num == -1) {
                        auto it = qset.begin();
                            qset.erase(it);  
                        
                    }
                }
            }
        }

        if (!qset.empty()) {
            auto maxIt = prev(qset.end());
            auto minIt = qset.begin();

            cout << maxIt->first << " " << minIt->first << "\n";
        } else {
            cout << "EMPTY" << "\n";
        }
    }

}