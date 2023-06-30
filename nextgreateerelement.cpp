#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums){
    stack<int> S;
    vector<int> nge(nums.size());
    nge[nums.size()-1] = -1;
    for(int i= nums.size()-1; i>=0; i--){
        while(!S.empty && nums[S.top()] < nums[i]){
            S.pop();
        }

        if(S.empty()){
            nge[i]= -1;
        } else {
           nge[i] = nums[S.top()];
        }
        S.push(i);
    }
    return nge;
}
int main(){
      vector<int> nums = {1, 3, 2, 4, 5, 1};
    vector<int> result = nextGreaterElement(nums);
    
    cout << "Next greater elements: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}