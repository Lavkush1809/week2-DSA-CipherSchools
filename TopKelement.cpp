#include<bits/stdc++.h>
using namespace std;

class comparator{
    public:
bool comparator(const pair<int, int> &a, const pair<int,int> &b){
    return a.second > b.second;
}
};
vector<int> topKFrequent(vector<int> & vec, int k){
    unordered_map<int, int> hash;
    for(int i=0; i<vec,size(); i++){
        hash[vec[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>comparator> pq;
    for(auto itr = hash.begin(); itr!= hash.end(); itr++){
        if(pq.size()<k){
            pq.push(pair<int, int>{first, itr->second});
        } else {
            if(pq.top().second < itr->second){
                pq.pop();
                pq.puh(pair<int, int>{first, itr->second});
            }
        }
    }
     vector<int> result(k);
     int i=0;
     while(!pq.empty()){
        result[i++]= pq.top().first;
        pq.pop();
     }
     return result;
}
int main(){
     vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}