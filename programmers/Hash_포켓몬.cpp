#include <vector>
#include <iostream>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> temp;
    
    for(int i=0; i<nums.size(); i++){
        temp.insert(nums[i]);
    }
    
    if((nums.size()/2)<=temp.size()){
        answer = nums.size()/2;
    }
    else{
        answer = temp.size();
    }
    return answer;
}
