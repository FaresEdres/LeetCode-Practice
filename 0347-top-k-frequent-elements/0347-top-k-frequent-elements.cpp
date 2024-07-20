class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freqMap;
    for(auto &count:nums){
        freqMap[count]++;
    }

    priority_queue<pair<int,int>> maxHeap;
    for(auto &count:freqMap){
    maxHeap.push({count.second,count.first});
    }

    vector<int> result;
    for(int i=0; i<k;i++){
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
    }
};