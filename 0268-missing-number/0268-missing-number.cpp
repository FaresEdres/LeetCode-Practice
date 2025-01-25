class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        unordered_map <int,bool> numMap;
        int miss=0;
      
        for(int i=0;i<=len;i++){
            numMap[i]=true;
        }
        for (auto& num:nums){
            numMap.erase(num);
        }
        return numMap.begin()->first;

    }
};